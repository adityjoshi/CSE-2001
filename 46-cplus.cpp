#include <iostream>
using namespace std;

class MyClass {
public:
    void myFunction() {
        cout << "myFunction() called from MyClass" << endl;
    }
};

class MyChild : public MyClass {
};

class Grandchild : public MyChild {
};

int main() {
       Grandchild gc;
      gc.myFunction();        // Accessing function from MyClass
   
    return 0;
}

