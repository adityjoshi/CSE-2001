#include <iostream>

class Cube {
private:
    double side;

public:
    // Default constructor
    Cube() : side(0) {}

    // Parameterized constructor
    Cube(double s) : side(s) {}

    // Copy constructor
    Cube(const Cube& other) : side(other.side) {}

    // Method to set the side length
    void setSide(double s) {
        side = s;
    }

    // Method to get the side length
    double getSide() const {
        return side;
    }

    // Method to calculate the volume of the cube
    double volume() const {
        return side * side * side;
    }
};

int main() {
    // Default constructor
    Cube cube1_default;
    std::cout << "Cube with default constructor - Side length: " << cube1_default.getSide() << std::endl;

    // Parameterized constructor
    double sideLength;
    std::cout << "Enter the side length of the cube: ";
    std::cin >> sideLength;
    Cube cube2_param(sideLength);
    std::cout << "Cube with parameterized constructor - Side length: " << cube2_param.getSide() << std::endl;

    // Copy constructor
    Cube cube3_copy = cube2_param;
    std::cout << "Cube created using copy constructor - Side length: " << cube3_copy.getSide() << std::endl;

    // Calculate volume of the cube created with parameterized constructor
    std::cout << "Volume of cube with parameterized constructor: " << cube2_param.volume() << std::endl;

    return 0;
}

