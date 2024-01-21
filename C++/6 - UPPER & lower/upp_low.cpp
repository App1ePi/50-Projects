#include <iostream>
#include <algorithm>

int main() {
    std::string str("");
    char option;

    std::cout << "UPPER or lower?: ";
    std::cin >> option;

    if (option == 'U') {
        std::cout << "Enter String: ";
        std::cin >> str;

        std::transform(str.begin(), str.end(), str.begin(), toupper);

        std::cout << str;
    }

    if (option == 'l') {
        std::cout << "Enter String: ";
        std::cin >> str;

        std::transform(str.begin(), str.end(), str.begin(), tolower);

        std::cout << str;
    }
}