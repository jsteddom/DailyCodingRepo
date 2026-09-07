#include <iostream>
#include "MyCalc.h"

int main () {
    double op1 { 0 };
    double op2 { 0 };
    char operation {};
    bool menuLoop {true};
    int menuSelection { 0 };
    std::cout << "----------Welcome to the simple calc exe.!----------\n\n";
    /*
    For one-time run 

    std::cout << "Enter the first number: ";
    std::cin >> op1;
    std::cout << "\nEnter an operator: ";
    std::cin >> operation;
    std::cout << "\nEnter the second number: ";
    std::cin >> op2;
    std::cout << "\nYour solution to " << op1 << operation << op2 << " = " << calculate_operation(op1, op2, operation);
    
    */
   
    do {
        std::cout << "Make a selection:\n1)Add\n2)Subtract\n3)Multiply\n4)Divide\n0)Quit\n\nYour Selection: ";
        std::cin >> menuSelection;
        switch (menuSelection)
        {
        case 1:
            std::cout << "Enter the first number: ";
            std::cin >> op1;
            std::cout << "\nEnter the second number: ";
            std::cin >> op2;
            operation = '+';
            break;
        case 2:
            std::cout << "Enter the first number: ";
            std::cin >> op1;
            std::cout << "\nEnter the second number: ";
            std::cin >> op2;
            operation = '-';
            break;
        case 3:
            std::cout << "Enter the first number: ";
            std::cin >> op1;
            std::cout << "\nEnter the second number: ";
            std::cin >> op2;
            operation = '*';
            break;
        case 4:
            std::cout << "Enter the first number: ";
            std::cin >> op1;
            std::cout << "\nEnter the second number: ";
            std::cin >> op2;
            operation = '/';
            break;
        case 0: 
            std::cout << "\n-----Goodbye!-----\n";
            menuLoop = false;
        default:
            std::cout << "\n---Not a valid selection---\n---Please try again---\n";
            break;
        }
        std::cout << "\nYour solution to " << op1 << operation << op2 << " = " << calculate_operation(op1, op2, operation) << std::endl;
    } while (menuLoop);

   
    



    return 0;
}