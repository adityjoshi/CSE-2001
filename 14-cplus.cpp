
#include <iostream>
#include <string>
using namespace std;

class MyName {
    string name;

public:
    void printname() {
        cout << "Enter your name is: ";
        cin >> name;
    }

    string getName() const {
        return name;
    }
} n1;

int main() {
    n1.printname();
    cout << "My Name: " << n1.getName();
    return 0;
}

