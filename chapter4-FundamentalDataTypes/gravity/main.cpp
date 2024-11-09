#include <cstdlib>
#include <iostream>

/**
 * This program simulates a ball being dropped off a tower.
 * Assumptions:
 * * Normal Gravity
 * * Ball has no initial velocity
 * * No wind resistance
 */

int getTowerHeight();
double distanceFallen(double towerHeight, int seconds);
void calculateAndPrintHeight(double towerHeight, int seconds);

double GRAVITY{9.8}; // 9.8 m/s^2

int main()
{
    int towerHeight{getTowerHeight()};

    calculateAndPrintHeight(towerHeight, 0);
    calculateAndPrintHeight(towerHeight, 1);
    calculateAndPrintHeight(towerHeight, 2);
    calculateAndPrintHeight(towerHeight, 3);
    calculateAndPrintHeight(towerHeight, 4);
    calculateAndPrintHeight(towerHeight, 5);

    return EXIT_SUCCESS;
}

int getTowerHeight()
{
    std::cout << "Enter the height of the towerr in meters: ";
    int height{};
    std::cin >> height;
    return height;
}

/**
 * Calculate the distance fallen based on tower height and seconds since dropped.
 */
double distanceFallen(double towerHeight, int seconds)
{
    double distanceFallen{GRAVITY * (seconds * seconds) / 2};

    // distance fallen greater than or equal to tower height means the ball has reached the ground.
    if (towerHeight - distanceFallen < 0)
        return towerHeight;

    return distanceFallen;
}

void printHeight(double height, int seconds)
{
    if (height > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << '\n';
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground." << '\n';
}

void calculateAndPrintHeight(double towerHeight, int seconds)
{
    double height{towerHeight - distanceFallen(towerHeight, seconds)};
    printHeight(height, seconds);
}
