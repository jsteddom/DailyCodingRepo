#ifndef CALC_OPS
#define CALC_OPS
#include <iostream>

double calculate_operation(double x, double y, char op) {
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;   
    default:
        std::cout << "\n---Error---\n";
        break;
    }
    return 0;
}
#endif