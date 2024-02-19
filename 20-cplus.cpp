#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Structure to represent a student
struct Student {
    string name;
    string regNo;
    string department;
    int year;
    int semester;
    vector<string> subjects;
};

int main() {
    Student student;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter registration number: ";
    getline(cin, student.regNo);

    cout << "Enter department: ";
    getline(cin, student.department);

    cout << "Enter year: ";
    cin >> student.year;

    cout << "Enter semester: ";
    cin >> student.semester;
    
    cin.ignore(); // Ignore newline character left in the input buffer

    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    cin.ignore(); // Ignore newline character left in the input buffer

    cout << "Enter subject names:" << endl;
    for (int i = 0; i < numSubjects; ++i) {
        string subject;
        cout << "Subject " << i+1 << ": ";
        getline(cin, subject);
        student.subjects.push_back(subject);
    }

    // Display student details
    cout << "\nStudent details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Registration Number: " << student.regNo << endl;
    cout << "Department: " << student.department << endl;
    cout << "Year: " << student.year << endl;
    cout << "Semester: " << student.semester << endl;
    cout << "Subjects:" << endl;
    for (const string& subject : student.subjects) {
        cout << "- " << subject << endl;
    }

    return 0;
}

