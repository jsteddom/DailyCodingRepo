#include <iostream>

int main () {
    int smaller {};
    int larger {};
    std::cout << "Enter a integer: ";
    std::cin >> smaller;
    std::cout << "\nEnter a larger integer: ";
    std::cin >> larger;
    if (smaller > larger) {
        std::cout << "\nSwapping the values\n";
        // Temp Objects
        int small {larger};
        int large = {smaller};
        std::cout << "The smaller value is " << small;
        std::cout << "\nThe larger value is " << large;
        // Temps die here
    }
    else {
        std::cout << "The smaller value is " << smaller;
        std::cout << "\nThe larger value is " << larger;
    }

    // inputs die here
    return 0;
}