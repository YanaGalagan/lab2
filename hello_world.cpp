#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "Введите ваше имя: ";
  std::cin >> name;
  std::cout << "Hello world from @" << name << "\n";
  return 0;
}