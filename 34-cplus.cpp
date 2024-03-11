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

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Manager : public Worker {
protected:
    string department;

public:
    Manager() {}

    void getDetails() {
        Worker::getDetails();
        cout << "Enter department: ";
        cin >> department;
    }

    void display() {
        Worker::display();
        cout << "Department: " << department << endl;
    }
};

// Sub-derived class
class CEO : public Manager {
private:
    int totalManagers;

public:
    CEO() : totalManagers(0) {}

    void addManager() {
        totalManagers++;
    }

    void getDetails() {
        Manager::getDetails();
    }

    void display() {
        Manager::display();
        cout << "Total Managers: " << totalManagers << endl;
    }
};

int main() {
    // Creating an object of CEO class
    CEO ceo;
    
    // Taking input for CEO details
    cout << "Enter CEO's details:" << endl;
    ceo.getDetails();
    
    // Adding managers (dummy data for demonstration)
    ceo.addManager();
    ceo.addManager();

    // Displaying CEO information
    cout << "\nCEO's Information:" << endl;
    ceo.display();

    return 0;
}

