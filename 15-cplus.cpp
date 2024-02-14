#include <iostream>
#include <string>
using namespace std;

class MyName {
    string name;

public:
    void printname() {
        cout << "Enter your name: ";
        cin >> name;
    }

    string getName() const {
        return name;
    }
};

int main() {
    MyName n1, n2, n3; 
    cout << "Enter details for the first person:" << endl;
    n1.printname();
    
    cout << "Enter details for the second person:" << endl;
    n2.printname();

    cout << "Enter details for the third person:" << endl;
    n3.printname();

    cout << "Details of the first person: " << n1.getName() << endl;
    cout << "Details of the second person: " << n2.getName() << endl;
    cout << "Details of the third person: " << n3.getName() << endl;

    // Displaying the names of three friends
    cout << "Names of three friends: " << n1.getName() << ", " << n2.getName() << ", " << n3.getName() << endl;

    return 0;
}

