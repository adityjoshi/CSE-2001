#include <iostream>
#include <string>
using namespace std;

// Base class Shape
class Shape {
public:
    void drawShape() {
        cout << "Drawing shape..." << endl;
    }
};

// Class Colour
class Colour {
protected:
    string color;
public:
    void setColour(const string& c) {
        color = c;
    }

    string getColour() const {
        return color;
    }
};

// Base class Drawable
class Drawable {
public:
    void draw() {
        cout << "Drawing..." << endl;
    }
};

// Derived class ColouredCircle
class ColouredCircle : public Shape, public Colour, public Drawable {
public:
    void drawColouredCircle() {
        drawShape(); // Call base class method
        draw(); // Call another base class method
        cout << "Drawing a circle with color: " << getColour() << endl;
    }
};

int main() {
    ColouredCircle circle;
    circle.setColour("Red");
    circle.drawColouredCircle();

    return 0;
}

