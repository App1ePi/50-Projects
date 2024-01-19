#include <iostream>

int main() {
    int x;
    int y;

    std::cout << "Enter 1st number: ";
    std::cin >> x;

    std::cout << "Enter 2nd number: ";
    std::cin >> y;

    int result = x + y;
    std::cout << "Result: " + result;
}