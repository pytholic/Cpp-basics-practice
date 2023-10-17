/*
artillery.cc, created by @pythonlic on 2023.10.17
Description: A simple game with a little physics
*/

#include <iostream>
#include <math.h>
#include <time.h>
#include <stdio.h>

using namespace std;

const int NUM_SHELLS = 10;     // allowed 10 shells per target
const int MIN_DIST = 200;      // min distance for a target
const int MAX_DIST = 900;      // max distance for a target
const double VELOCITY = 200.0; // initial VELOCITY of 200 ft/sec
const double GRAVITY = 32.2;   // GRAVITY for distance calculation
const double PI = 3.1415;

int distance_calc(double in_angle)
{
    /*
    The following calculates how far the shot goes given its angle
    of projection, VELOCITY, and how long it stays in the air.
    */

    double time_in_air;
    time_in_air = (2.0 * VELOCITY * sin(in_angle)) / GRAVITY;
    return (int)round((VELOCITY * cos(in_angle)) * time_in_air);
}

int check_shot()
{
    /*
    Gets user's angle input and calculates distance where the shot lands.
    */

    int distance;
    double angle;
    cout << "What angle? " << endl;
    if (!(cin >> angle))
        return -1;
    // convert to radiancs
    angle = (angle * PI) / 180.0;
    distance = distance_calc(angle);
    return distance;
}

int initialize()
{
    /*
    Generate a random number for enemy position.
    */

    int enemy_position;
    // Initialize random seed.
    srand(time(NULL));
    // Generate random number between mindist and MAX_DIST
    enemy_position = rand() % MAX_DIST + MIN_DIST;
    printf("The enemy is %d feet away!!!\n", enemy_position);
    return enemy_position;
}

int fire(int num_killed)
{
    /* This function plays the game */

    int enemy, shots, hit;
    int distance;

    // Initialize variables
    shots = NUM_SHELLS;
    enemy = initialize();
    distance = 0;
    hit = 0;

    do
    {
        // Get the distance where shot lands. Compare it with enemy position.
        distance = check_shot();
        // Error checking on the input
        if (distance == -1)
        {
            cout << "Enter numbers only..." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        // Compare enemy position with calculated distance
        double diff = enemy - distance;
        if (abs(diff) <= 1)
        {
            hit = 1;
            num_killed++;
            // log some user messages
            cout << "You hit the enemy!!!" << endl;
            cout << "It took you " << NUM_SHELLS - shots + 1 << " shots." << endl;
        }
        else
        {
            shots--;
            if (diff < 0)
            {
                printf("You over shot by %f .\n", abs(diff));
            }
            else if (diff > 0)
            {
                printf("You under shot by %f .\n", diff);
            }
        }
    } while ((shots > 0) && (!hit));
    if (shots == 0)
        cout << "You have run out of ammo..." << endl;
    return num_killed;
}

void startup()
{
    /* For introductory screen. */
    cout << "Welcome to Artillery." << endl;
    cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
    cout << "You have one cannon, which you can shoot at any angle." << endl;
    cout << "You have only " << NUM_SHELLS << " cannonballs per target." << endl;
    cout << "Let's begin..." << endl;
}

int main()
{
    startup();
    int killed = 0;
    char done;

    // The main program loop for the game
    do
    {
        killed = fire(killed);
        cout << "I see another one, are you ready? (y/n)  " << endl;
        cin >> done;
    } while (done != 'n');
    printf("You have killed %i enemies.", killed);

    return 0;
}