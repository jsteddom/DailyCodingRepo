#include <iostream>


/*
Goin through the quiz, I did not define the constructor as explicit. I should
have since implicit conversion is not desired.

const keyword in functions where values are not modofied. I need to be more aware and adding
this as appropriate.


*/

class Fraction {
private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
public:
    explicit Fraction(int numerator=0, int denominator=1)
        : m_numerator { numerator }, m_denominator { denominator}
    {
    }

    void getFraction()
    {
        std::cout << "Enter a value for numerator: ";
        std::cin >> m_numerator; // this is a member function, so we can access members directly
        std::cout << "Enter a value for denominator: ";
        std::cin >> m_denominator;
        std::cout << '\n';
    }
    Fraction multiply(const Fraction& f1) const{
        return Fraction{ f1.m_numerator * m_numerator, f1.m_denominator * m_denominator };
    }
    void printFraction() const
    {
        std::cout << m_numerator << '/' << m_denominator << '\n';
    }

};


int main()
{
    Fraction f1{};
    f1.getFraction();

    Fraction f2{};
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();

    return 0;
}