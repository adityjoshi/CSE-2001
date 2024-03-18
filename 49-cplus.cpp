#include <iostream>

class Base {
public:
    // Virtual function in the base class
    virtual void display() {
        std::cout << "Inside Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    // Redefining the virtual function in the derived class
    void display() override {
        std::cout << "Inside Derived class" << std::endl;
    }
};

int main() {
    Base* basePtr;       // Pointer of type Base
    Base baseObj;        // Object of class Base
    Derived derivedObj;  // Object of class Derived

    basePtr = &baseObj;  // Assigning the address of Base object to Base pointer
    basePtr->display();  // Calls the display function of Base class

    basePtr = &derivedObj;  // Assigning the address of Derived object to Base pointer
    basePtr->display();     // Calls the display function of Derived class (overridden function)

    return 0;
}

