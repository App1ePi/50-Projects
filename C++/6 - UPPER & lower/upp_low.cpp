#include <iostream>

int main() {
    std::string str("");
    char option;

    std::cout << "UPPER or lower?: ";
    std::cin >> option;

    if (option == 'U') {
        std::cout << "Enter String: ";
        std::cin >> str;
    }
}