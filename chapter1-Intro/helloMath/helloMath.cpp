/**
 * This project demonstrates the concepts from chapter one.
 */
#include <iostream>

/**
 * Using the standard library we can have the user can use the console to interact with the program.
 */
int main()
{
    // Always end with a newline to prevent confusion.
    std::cout << "Hello, World!" << '\n';

    /**
     * Direct list initialization is the preferred method of initializing a variable.
     * Proivdes a uniform way to initialize variables (unambiguous).
     * Initializes objects with a list of values rather than a single value.
     * We define the variable before it is used.
     *
     * In this case, we are using value initialization (AKA zero-initialization, as the default value is 0).
     */
    int number{};
    std::cout << "Please enter a number to be doubled:  " << '\n';
    // No need for a newline after user input becuase they hit enter which adds a newline to the buffer.
    std::cin >> number;

    // Use this attribute so that the compiler won't complain about unused variables
    [[maybe_unused]] int mayOrMayNotUseThisVariable{2};

    std::cout << "Your number doubled is: "
              << number * mayOrMayNotUseThisVariable
              << std::endl; // Good practice to flush the buffer and create a newline upon program completion

    // return healthy status.
    return 0;
}
