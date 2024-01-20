#include <iostream>

int main() {
    char mode;
    std::cout << "C -> F or F -> C?: ";
    std::cin >> mode;

    if (mode == 'C') {
        float c;
        std::cout << "Enter value in C: ";
        std::cin >> c;

        float conversion = (c * 1.8) + 32;
        std::cout << "Value in F: " << conversion;
    }

    if (mode == 'F') {
        float f;
        std::cout << "Enter value in F: ";
        std::cin >> f;

        float conversion = ((f - 32) * 5) / 9;
        std::cout << "Value in C: " << conversion;
    }
}