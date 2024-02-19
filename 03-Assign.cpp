#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int regNumber;
    string subjects[3];
    double caMarks[3];
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Registration Number: ";
        cin >> students[i].regNumber;
        for (int j = 0; j < 3; ++j) {
            cout << "Enter subject " << j + 1 << " name: ";
            cin >> students[i].subjects[j];
            cout << "Enter CA Marks for subject " << j + 1 << ": ";
            cin >> students[i].caMarks[j];
        }
    }

    cout << "\nDetails of all students:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Registration Number: " << students[i].regNumber << endl;
        cout << "Subjects and CA Marks:" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "Subject " << j + 1 << ": " << students[i].subjects[j] << ", CA Marks: " << students[i].caMarks[j] << endl;
        }
    }

    return 0;
}

