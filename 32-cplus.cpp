#include <iostream>
#include <string>

using namespace std;

// Base class
class Worker {
protected:
    string name;
    int age;

public:
    Worker(const string& n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Manager : public Worker {
private:
    string department;

public:
    Manager(const string& n, int a, const string& dept) : Worker(n, a), department(dept) {}

    void display() {
        Worker::display(); 
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager manager("John Doe", 35, "Finance");

    cout << "Manager's Information:" << endl;
    manager.display();

    return 0;
}

