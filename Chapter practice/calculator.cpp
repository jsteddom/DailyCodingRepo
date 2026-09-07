#include <iostream>
#include <stdlib.h>
#include <cctype>

double Addition(double, double);
double Subtraction(double, double);
double Multiplication(double, double);
double Division(double, double);

int main () {
    std::cout << "----------Welcome to Calculator.cpp!----------" << std::endl;
    char choice = 'a';
    while (choice != 'Q') {
        std::cout << "Select operation:\nA) Addition \nB) Subraction \nC) Multiplication \nD) Division\nQ) Quit \nChoice: ";
        std:: cin >> choice;
        choice = std::toupper(choice);
        double x {};
        double y {};
        if (toupper(choice) != 'Q') {
            std::cout << "Enter Number 1: ";
            std::cin >> x;
            std::cout << "\nEnter Number 2:";
            std::cin >> y;
        }
        double answer {};
        switch (choice)
        {
        case ('A'):
            answer = Addition(x,y);
            std::cout << "Adding " << x << " and " << y << " = " << answer << std::endl;
            break;
        case ('B'):
            answer = Subtraction(x,y);
            std::cout << "Subracting " << x << " from " << y << " = " << answer << std::endl;
            break;
        case ('C'):
            answer = Multiplication(x,y);
            std::cout << "Multiplying " << x << " by " << y << " = " << answer << std::endl;
            break;
        case ('D'):
            answer = Division(x,y);
            std::cout << "Dviding" << x << " by " << y << " = " << answer << std::endl;
            break;
        case ('Q'):
            std::cout << "Good bye!\n";
        default:
            break;
        }
    }
}

double Addition(double x, double y) {
    return x + y;
}
double Subtraction(double x, double y) {
    return x - y;
}
double Multiplication(double x, double y) {
    return x * y;
}
double Division(double x, double y) {
    return x / y;
}

