#include <iostream>
#include "composer.h"
#include "database.h"

using namespace std;

int main()
{
    Database db;
    char done;
    do
    {
        Composer composer;

        // Add a new composer
        string first_name;
        string last_name;
        int yob;
        string genre;
        string fact;

        cout << "Enter the first name of the composer: " << endl;
        cin >> first_name;
        cout << "Enter the last name of the composer: " << endl;
        cin >> last_name;
        cout << "Enter the year of birth: " << endl;
        cin >> yob;
        cout << "Enter the genre: " << endl;
        cin >> genre;
        cout << "Enter s fact about the composer: " << endl;
        cin >> fact;

        Composer &comp = db.add_composer(first_name, last_name, genre, yob, fact);

        cout << "\nDo you want to enter more? (y/n)  " << endl;
        cin >> done;
        cout << endl;

    } while (done != 'n');
    cout << "\nData has been entered!" << endl
         << endl;

    // Retrieve a composer data
    string lastname;
    cout << "Enter last name to get the composer: " << endl;
    cin >> lastname;
    Composer &comp = db.get_composer(lastname);
    cout << endl;
    comp.display();

    // Promote/Demote a composer
    char ans1;
    int increment;
    int decrement;
    cout << "Do you want to promote/demote the composer? y/n: " << endl;
    cin >> ans1;
    cout << endl;
    if (ans1 == 'y')
    {
        string ans2;
        cout << "Do you want to promote or demote? " << endl;
        cin >> ans2;
        if (ans2 == "promote")
        {
            cout << "\nEnter a number: " << endl;
            cin >> increment;
            comp.promote(increment);
        }
        if (ans2 == "demote")
        {
            cout << "\nEnter a number: " << endl;
            cin >> decrement;
            comp.demote(decrement);
        }
        cout << endl;
        comp.display();
        cout << endl;
    }

    // List all composers
    cout << "Displaying all composers.. " << endl
         << endl;
    db.display_all();

    // List all by rank
    cout << "Listing composer by rank.." << endl
         << endl;
    db.display_by_rank();
}