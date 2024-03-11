#include <iostream>
#include <string>

using namespace std;

// Base class
class Worker {
protected:
    string name;
    int age;

public:
    Worker() {}

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Manager : public Worker {
private:
    string department;

public:
    Manager() {}

    void getDetails() {
        Worker::getDetails();
        cout << "Enter department: ";
        cin >> department;
    }

    void showDetails() {
        Worker::showDetails();
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Creating an object of Manager class
    Manager manager;
    
    // Creating an object of Worker class
    Worker worker;

    // Taking input for manager details
    cout << "Enter Manager's details:" << endl;
    manager.getDetails();

    // Displaying manager information
    cout << "\nManager's Information:" << endl;
    manager.showDetails();

    // Taking input for worker details
    cout << "\nEnter Worker's details:" << endl;
    worker.getDetails();

    // Displaying worker information
    cout << "\nWorker's Information:" << endl;
    worker.showDetails();

    return 0;
}

