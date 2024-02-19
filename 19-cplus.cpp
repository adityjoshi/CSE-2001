#include <iostream>
#include <string>
using namespace std;

// Structure to represent an employee
struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

int main() {
    Employee emp;

    // Input employee details
    cout << "Enter employee ID: ";
    cin >> emp.id;
    cin.ignore(); // Ignore newline character left in the input buffer

    cout << "Enter employee name: ";
    getline(cin, emp.name);

    cout << "Enter employee department: ";
    getline(cin, emp.department);

    cout << "Enter employee salary: ";
    cin >> emp.salary;

    // Display employee details
    cout << "\nEmployee details:" << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Department: " << emp.department << endl;
    cout << "Salary: " << emp.salary << endl;

    return 0;
}

