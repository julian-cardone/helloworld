#include "moreMath.h"
#include <cstdlib>
#include <iostream>

/**
 * Get user input and return the number.
 */
int getNumber()
{
    int x{};
    std::cin >> x;
    return x;
}

/**
 * Get two numbers, call the arithmetic functions with them, and display the result values.
 */
int main()
{
    std::cout << "Enter a number: " << '\n';
    int x{getNumber()};

    std::cout << "Enter a second number: " << '\n';
    int y{getNumber()};

    std::cout << "Add: " << add(x, y) << '\n';
    std::cout << "Subtract: " << subtract(x, y) << '\n';
    std::cout << "Multiply: " << multiply(x, y) << '\n';
    std::cout << "Divide: " << divide(x, y) << '\n';

    return EXIT_SUCCESS;
}
