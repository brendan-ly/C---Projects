#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "Welcome to temperature converter!" << '\n';
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "Enter unit that you would like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temp in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temp is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temp in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temp is: " << temp << "C\n";
    }
    else {
        std::cout << "Please enter only C or F\n";
    }

    return 0;
}


