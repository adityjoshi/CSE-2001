#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // Constructor
    Student(const std::string& n, int a) : name(n), age(a) {
        std::cout << "Constructor called for " << name << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Method to display student information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating objects of Student class
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    // Displaying student information
    student1.displayInfo();
    student2.displayInfo();

    // Exiting the program, destructors will be called automatically
    return 0;
}

