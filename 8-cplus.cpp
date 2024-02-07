#include <iostream>
using namespace std;

int main() {
    string name = "John";

    string *ptr = &name;

    cout << "Address of variable 'name': " << ptr << endl;

    return 0;
}

