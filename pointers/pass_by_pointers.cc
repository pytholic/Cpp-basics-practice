#include <iostream>

using namespace std;

float accelerate(float *speed, float amount);

int main()
{
    float speed = 23.5f;
    float amount = 0.0f;

    printf("Current speed: %.2f\n", speed);
    cout << "Accelerate by how much?" << endl;
    cin >> amount;

    accelerate(&speed, amount);

    printf("Car accelerate by %.2f. Current speed is %.2f.", amount, speed);
}

float accelerate(float *speed, float amount)
{
    *speed = *speed + amount;
    return *speed;
}