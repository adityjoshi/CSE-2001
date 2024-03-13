#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
public:
    void move() {
        cout << "Vehicle is moving" << endl;
    }
};

// Derived class Car from Vehicle
class Car : public Vehicle {
public:
    void startEngine() {
        cout << "Car engine started" << endl;
    }
};

// Sub-derived class SportsCar from Car
class SportsCar : public Car {
public:
    void accelerate() {
        cout << "Sports car is accelerating" << endl;
    }
};

int main() {
    SportsCar sportsCar;
    sportsCar.move(); // Call function from base class Vehicle
    sportsCar.startEngine(); // Call function from derived class Car
    sportsCar.accelerate(); // Call function from sub-derived class SportsCar
    return 0;
}

