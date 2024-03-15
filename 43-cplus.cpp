#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(const string& name, int age) : name(name), age(age) {}
    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
public:
    Student(const string& name, int age, int rollNumber) : Person(name, age), rollNumber(rollNumber) {}

    void displayStudent() const {
        display();        
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
        Student student("adi", 19, 56355);
        student.displayStudent();
    return 0;
}

