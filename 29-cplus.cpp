#include <iostream>

class Box {
private:
    double length;
public:
    Box(double len) : length(len) {}
    friend double getLength(Box obj);
};

double getLength(Box obj) {
    obj.length += 10;
    return obj.length;
}

int main() {
    Box box1(10.0); // Create a Box object with length 10.0
    std::cout << "Length of box1: " << getLength(box1) << std::endl; // Display the length of box1 using friend function
    return 0;
}

