#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
public:
    void move() {
        cout << "Vehicle is moving" << endl;
    }
};
class Car : public Vehicle {
public:
    void startEngine() {
        cout << "Car engine started" << endl;
    }
};

class SportsCar : public Car {
public:
    void accelerate() {
        cout << "Sports car is accelerating" << endl;
    }
};

int main() {
    SportsCar sportsCar;
    sportsCar.move();
    sportsCar.startEngine();
    sportsCar.accelerate(); 
    return 0;
}

