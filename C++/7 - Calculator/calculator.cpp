#include <iostream>

int main() {
  float num1;
  std::cout << "Enter First Number: "; 
  std::cin >> num1;

  float num2;
  std::cout << "Enter Second Number: ";
  std::cin >> num2;

  char mode;
  std::cout << "Enter Operator: ";
  std::cin >> mode;

  if (mode == '+') {
    float result = num1 + num2;
    std::cout << "Result: " << result;
  }

    if (mode == '-') {
    float result = num1 - num2;
    std::cout << "Result: " << result;
  }

    if (mode == '/') {
    float result = num1 / num2;
    std::cout << "Result: " << result;
  }

    if (mode == '*') {
    float result = num1 * num2;
    std::cout << "Result: " << result;
  }
}