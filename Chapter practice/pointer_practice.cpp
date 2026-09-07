#include <iostream>

int main() {

    int x {0};
    int& ref {x};
    int* ptr {&x};

    std::cout << "x: " << x << ", ref to x: " << ref << ", ptr to x: " << ptr;

    *ptr = 4;
    std::cout << "x: " << x << ", ref to x: " << ref << ", ptr to x: " << ptr;
    return 0;
}