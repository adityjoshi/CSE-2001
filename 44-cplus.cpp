#include <iostream>
using namespace std;

class MyClass {
public:
    void myFunction() {
        cout << "myFunction() from MyClass" << endl;
    }
};

class MyOtherClass {
public:
    void myOtherFunction() {
        cout << "myOtherFunction() from MyOtherClass" << endl;
    }
};

class MyChild : public MyClass, public MyOtherClass {

};

int main() {
    MyChild childObj;
    childObj.myFunction();
    childObj.myOtherFunction();

    return 0;
}

