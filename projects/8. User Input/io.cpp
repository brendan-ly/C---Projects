#include<iostream>

// cout << (insertion operator) is used to print the output
// cin >> (extraction operator) is used to take the input

int main() {
    std::string name;
    int age;
    
    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}