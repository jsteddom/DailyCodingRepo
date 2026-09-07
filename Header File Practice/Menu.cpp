#include <iostream>
#include <cstdlib>
#include <cctype>
#include "MenuChoices.h" 

int main() {
    std::cout << "-------Welcome-------" << std::endl;
    char choice = ' ';
    do {
        std::cout << "\nPlease make a selection" << std::endl;
        std::cout << "A) Convert Temperature for F to C\nB) Convert mm to inches\nQ) Quit\n";
        std::cin >> choice;
        choice = toupper(choice);
        switch (choice) {
            case('A'): {
                std::cout << "Enter a F temp to convert: ";
                double temp {};
                std::cin >> temp;
                double newTemp = ConvertTemp(temp);
                std::cout << temp << " In F is " << newTemp << " in C." << std::endl;
                break;
            }
                
            case('B'):
                std::cout << "";
                break;
            case('Q'):
                std::cout << "Goodbye!";
                break;
            default:
                break;
        }

    } while (choice != 'Q');
}


