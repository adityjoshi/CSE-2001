#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
      if (age >= 18) {
            cout << "You are eligible to vote." << endl;
        } else {
          throw 505;
           
        }
    } catch (...) {
      cout<<"access denied";
           
    }

    return 0;
}

