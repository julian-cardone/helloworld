#include <cstdlib>
#include <iomanip>
#include <iostream>

// this program displays the amount of bytes that are allocated for each fundamental data type.

int main()
{
    std::cout << std::left; // left justify output
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "wchar_t:" << sizeof(wchar_t) << " bytes\n";
    std::cout << std::setw(16) << "char16_t:" << sizeof(char16_t) << " bytes\n";
    std::cout << std::setw(16) << "char32_t:" << sizeof(char32_t) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";

    int x{100};
    std::cout << std::setw(16) << "variable x:" << sizeof(x) << " bytes\n";

    return EXIT_SUCCESS;
}
