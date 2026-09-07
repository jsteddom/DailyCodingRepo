#include <iostream>
#include <stdlib.h>

void skibidi() {
    std::cout << "Skibidi ahh goon" << std::endl;
}

int main() {
    std::cout << "Hi" << std::endl; // "Hi" is a literal text
    int userNput = 0;
    std::cout << "Enter a whole number: ";
    std::cin >> userNput;

    if (userNput > 0) {
        std::cout << "Input is positive" << std::endl;
    }
    else if (userNput <= 0) {
        std::cout << "Input is negative or zero" << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << "i: " << i << std::endl;
    }
    skibidi();

}

