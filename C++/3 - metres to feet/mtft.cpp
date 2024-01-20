#include <iostream>

int main() {
    float m;

    std::cout << "Enter Value in m: ";
    std::cin >> m;

    float conversion = m * 3.2808399;

    std::cout << "Value in ft: " << conversion;
}