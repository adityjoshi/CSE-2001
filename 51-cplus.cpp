#include <iostream>

using namespace std;

// Base class
class Base {
public:
    // Virtual function to enable polymorphism
    virtual void display() {
        cout << "Inside Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the display() function
    void display() override {
        cout << "Inside Derived class" << endl;
    }
};

// Main function
int main() {
    Base baseObj;        // Object of base class
    Derived derivedObj;  // Object of derived class
    
    // Calling display() function for base class object
    cout << "Calling display() function for Base class object:" << endl;
    baseObj.display();
    
    // Calling display() function for derived class object
    cout << "Calling display() function for Derived class object:" << endl;
    derivedObj.display();

    return 0;
}

