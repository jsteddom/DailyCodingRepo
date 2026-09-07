#include <iostream>
#include <cctype> //for toUpper
int main() {
    std::cout << "--------Welcome to time converter!--------" << std::endl;
    std::cout << "Select unit of time to convert from:\nA: Seconds\nB: Minutes\nC: Hours\nYour input: ";
    char timeFrom{};
    std::cin >> timeFrom;
    std::cout << "\nSelect unit of time to convert to: \nA: Seconds\nB: Minutes\nC: Hours\nYour input: ";
    char timeTo{};
    std::cin >> timeTo;
    std::cout << "\nEnter quanity of time: ";
    double time {};
    std::cin >> time; 
    if (std::toupper(timeTo) == std::toupper(timeFrom)) {
        std::cout << "Same time format, no conversion";
        return 0;
    }
    double convertedTime {};
    if (std::toupper(timeTo) == 'A') {
        if (std::toupper(timeFrom) == 'B') {
            convertedTime = time * 60;
        }
        else {
            convertedTime = time * (60 * 60);
        }
    } else if (std::toupper(timeTo) == 'B') {
        if (std::toupper(timeFrom) == 'A') {
            convertedTime = time / 60;
        }
        else {
            convertedTime = time * 60;
        }
    } else if (std::toupper(timeTo) == 'C') {
        if (std::toupper(timeFrom) == 'A') {
            convertedTime = time / (60 * 60);
        }
        else {
            convertedTime = time / 60;
        }
    }
    else {
        std::cout << "Invalid arguments, please re-enter again";
    }
    std::cout << "You converted from " << timeFrom << ": " << time << " to " << timeTo << ": " << convertedTime;


    return 0;
}