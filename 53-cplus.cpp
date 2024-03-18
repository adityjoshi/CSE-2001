#include <iostream>

using namespace std;

class B {
public:
    virtual void display() {
        cout << "Inside Base class" << endl;
    }
};

class D : public B {
public:
    
    void display() override {
        cout << "Inside Derived class" << endl;
    }
};

int main() {
    B baseObj;    
    D derivedObj;     
    baseObj.display();
    
    derivedObj.display();

    return 0;
}

