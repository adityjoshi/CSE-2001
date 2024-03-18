#include <iostream>

using namespace std;

class X {
public:
    virtual void display() {
        cout << "Inside class X" << endl;
    }
};

class Y : public X {
public:
    void display() override {
        cout << "Inside class Y" << endl;
    }
};

int main() {
    X* ptrX;  
    Y objY;   
    ptrX = &objY;  
       ptrX->display();

    return 0;
}

