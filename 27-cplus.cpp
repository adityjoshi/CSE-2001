#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    // Copy Constructor
    Point(const Point& other) : x(other.x), y(other.y) {
        std::cout << "Copy constructor called." << std::endl;
    }

    // Method to display point coordinates
    void display() const {
        std::cout << "X: " << x << ", Y: " << y << std::endl;
    }
};

int main() {
    // Creating an object of Point class
    Point oldPoint(3.5, 7.2);
    std::cout << "Old Point: ";
    oldPoint.display();

    // Creating another object and using copy constructor
    Point newPoint = oldPoint;
    std::cout << "New Point (copied from Old Point): ";
    newPoint.display();

    return 0;
}

