#include <iostream>

int main() {

    int x {5};
    int& refToX {x};

    std::cout << "x: " << x << ", ref to x: " << refToX << std::endl;
    x = 6;
    std::cout << "x: " << x << ", ref to x: " << refToX << std::endl;

    const int y {9};
    const int& refToY {y};
    std::cout << "y: " << y << ", ref to y: " << refToY << std::endl;

    int z {2};
    const int& refToZ {z};
    std::cout << "z: " << z << ", ref to z: " << refToZ << std::endl;
    z = 3;
    std::cout << "z: " << z << ", ref to z: " << refToZ << std::endl;

    return 0;
}