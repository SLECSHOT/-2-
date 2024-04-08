#include <iostream>
#include <cmath>

int main() {
    double number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    double result = std::pow(number, 2);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}