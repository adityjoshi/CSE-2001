#include <iostream>

using namespace std;

// Base class
class Car {
public:
    // Virtual function to enable polymorphism
    virtual void changeGears() {
        cout << "Changing gears in a normal car" << endl;
    }
};

// Derived class
class SportsCar : public Car {
public:
    // Overriding the changeGears() function
    void changeGears() override {
        cout << "Changing gears in a sports car" << endl;
    }
};

// Main function
int main() {
    Car carObj;            // Object of base class
    SportsCar sportsCarObj;  // Object of derived class
    
    // Calling changeGears() function for base class object
    cout << "Calling changeGears() function for Car object:" << endl;
    carObj.changeGears();
    
    // Calling changeGears() function for derived class object
    cout << "Calling changeGears() function for SportsCar object:" << endl;
    sportsCarObj.changeGears();

    return 0;
}

