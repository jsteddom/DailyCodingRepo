#include <iostream>
#include <string>

class Ball {
private: 
    std::string m_color {};
    double m_radius {};
public: 
    Ball(std::string color, double radius)
    : m_color {color}
    , m_radius {radius}
    {

    }
    const std::string& getBallColor() const{
        return m_color;
    }
    const double& getBallRadius() const {
        return m_radius;
    }

};

void print(const Ball& theBall) {
    std::cout << "Ball(" << theBall.getBallColor() << ", " << theBall.getBallRadius() << ")" << std::endl;
}


int main()
{
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}