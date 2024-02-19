#include <iostream>
using namespace std;

// Class to represent a wall
class Wall {
private:
    double length;
    double height;

public:
    // Constructor to initialize length and height
    Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }

    // Function to calculate area of the wall
    double calculateArea() {
        return length * height;
    }
};

int main() {
    // Creating an object of class Wall and passing values to the constructor
    Wall myWall(10.0, 8.0);

    // Calculate and display the area of the wall
    cout << "Area of the wall: " << myWall.calculateArea() << " square units" << endl;

    return 0;
}

