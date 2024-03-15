#include <iostream>
#include <string>
using namespace std;

class Person {
};

class Employee {
protected:
    int salary;
public:
     Employee(int s) : salary(s) {};
};

class Programmer : public Person, public Employee {
public:
    int bonus;
    Programmer(int s) : Employee(s) {}
    void setSalary(int s) {
        salary = s;
    }

    int getSalary() const {
        return salary;
    }
};

int main() {
    Programmer myObj(50000);
    myObj.setSalary(55000);
    cout << "Updated Salary: " << myObj.getSalary() << endl;

    return 0;
}

