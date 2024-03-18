#include <iostream>

using namespace std;

class Car {
protected:
    int gear = 0; // Directly initialize gear to 0
public:
    // Virtual function to enable polymorphism
    virtual void changeGears() {
        cout << "Changing gears in a normal car" << endl;
        gear++;
        if (gear >= 5) {
            gear = 0; // Reset gear to 0 if it exceeds 4
        }
    }
};

class SportsCar : public Car {
public:
    // Override the changeGears() function
    void changeGears() override {
        cout << "Changing gears in a sports car" << endl;
        gear++;
        if (gear >= 5) {
            gear = 0; // Reset gear to 0 if it exceeds 4
        }
    }
};

int main() {
    Car carObj;            // Object of base class
    SportsCar sportsCarObj;  // Object of derived class
    
    cout << "Calling changeGears() function for Car object:" << endl;
    carObj.changeGears();
    
    cout << "Calling changeGears() function for SportsCar object:" << endl;
    sportsCarObj.changeGears();

    return 0;
}

