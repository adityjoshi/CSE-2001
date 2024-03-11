#include <iostream>

class Cgpa {
private:
    double cgpa;

public:
    Cgpa(double cgpa = 0.0) : cgpa(cgpa) {}

    bool operator>(const Cgpa& other) const {
        return cgpa > other.cgpa;
    }

    double getCGPA() const {
        return cgpa;
    }
};

int main() {
    Cgpa firstYearStudent(3.8);
    Cgpa secondYearStudent(3.5);

    if (firstYearStudent > secondYearStudent) {
        std::cout << "First year student has a higher CGPA." << std::endl;
    } else {
        std::cout << "Second year student has a higher or equal CGPA." << std::endl;
    }

    return 0;
}

