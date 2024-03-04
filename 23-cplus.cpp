#include <iostream>

class Cube {
private:
    double side;

public:
    Cube() : side(0) {}

    Cube(double s) : side(s) {}

    Cube(const Cube& other) : side(other.side) {}

    void setSide(double s) {
        side = s;
    }

    double getSide() const {
        return side;
    }

    double volume() const {
        return side * side * side;
    }
};

int main() {
    Cube cube1_default;
    std::cout << "Cube with default constructor - Side length: " << cube1_default.getSide() << std::endl;

    double sideLength;
    std::cout << "Enter the side length of the cube: ";
    std::cin >> sideLength;
    Cube cube2_param(sideLength);
    std::cout << "Cube with parameterized constructor - Side length: " << cube2_param.getSide() << std::endl;

    Cube cube3_copy = cube2_param;
    std::cout << "Cube created using copy constructor - Side length: " << cube3_copy.getSide() << std::endl;

    std::cout << "Volume of cube with parameterized constructor: " << cube2_param.volume() << std::endl;

    return 0;
}

