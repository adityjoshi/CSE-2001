#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw runtime_error("Age is not valid for election eligibility");
        }
        cout << "You are eligible to vote in the election." << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

