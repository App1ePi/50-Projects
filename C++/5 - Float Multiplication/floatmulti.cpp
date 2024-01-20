#include <iostream>

int main() {
    float num1;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    float num2;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    float result = num1 * num2;
    std::cout << "Result: " << result;
}