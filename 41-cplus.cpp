#include <iostream>
#include <string>
using namespace std;

// Base class Shape
class Shape {
public:
    void drawShape() {
        cout << "Drawing shape" << endl;
    }
};

// Base class Colour
class Colour {
private:
    string color;
public:
    void setColour(string c) {
        color = c;
    }
    string getColor() {
        return color;
    }
};

// Derived class ColoredShape inheriting from Shape and Colour
class ColoredShape : public Shape, public Colour {
public:
    void draw() {
        cout << "Drawing colored shape with color: " << getColor() << endl;
    }
};

int main() {
    ColoredShape coloredShape;
    coloredShape.drawShape(); // Call function from base class Shape
    coloredShape.setColour("Red"); // Call function from base class Colour
    coloredShape.draw(); // Call function from derived class ColoredShape
    return 0;
}


