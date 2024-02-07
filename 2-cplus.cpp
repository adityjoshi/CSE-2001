
#include <iostream>
#include <string>

using namespace std;

const int MAX_SUBJECTS = 3;

int main() {

    string subjectCodes[MAX_SUBJECTS];
    string subjectNames[MAX_SUBJECTS];
    double continuousAssessment[MAX_SUBJECTS];

    for (int i = 0; i < MAX_SUBJECTS; ++i) {
        cout << "Enter the subject code for subject " << i + 1 << ": ";
        cin >> subjectCodes[i];

        cout << "Enter the subject name for subject " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, subjectNames[i]);

        cout << "Enter the continuous assessment work for subject " << i + 1 << ": ";
        cin >> continuousAssessment[i];
    }

    cout << "\nSubject Information:\n";
    for (int i = 0; i < MAX_SUBJECTS; ++i) {
        cout << "Subject " << i + 1 << ":\n";
        cout << "Code: " << subjectCodes[i] << "\n";
        cout << "Name: " << subjectNames[i] << "\n";
        cout << "Continuous Assessment: " << continuousAssessment[i] << "\n\n";
    }

    return 0;
}


