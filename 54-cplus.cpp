#include <iostream>

using namespace std;

// Base class
class B {
public:
    // Virtual function to enable polymorphism
    virtual void display() {
        cout << "Inside Base class" << endl;
    }
};

// Derived class
class D : public B {
public:
    // Overriding the display() function
    void display() override {
        cout << "Inside Derived class" << endl;
    }
};

// Main function
int main() {
    B* ptr;       // Pointer of type Base
    B baseObj;    // Object of base class
    D derivedObj; // Object of derived class
    
    // Assigning the address of base object to base pointer
    ptr = &baseObj;
    // Calling display() function for base class object
    ptr->display();
    
    // Assigning the address of derived object to base pointer
    ptr = &derivedObj;
    // Calling display() function for derived class object
    ptr->display();

    return 0;
}

