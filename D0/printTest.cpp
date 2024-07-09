//
// Created by IT DICE on 2024-07-09.
//

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter Your Name : ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << std::endl;

    return 0;
}
