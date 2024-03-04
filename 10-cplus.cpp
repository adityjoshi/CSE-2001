#include <iostream>

inline bool isEligibleForVoting(int age) {
    return age >= 18; 
}

int main() {
    int candidateAge;
    std::cout << "Enter candidate's age: ";
    std::cin >> candidateAge;

    if (isEligibleForVoting(candidateAge)) {
        std::cout << "Candidate is eligible for voting." << std::endl;
    } else {
        std::cout << "Candidate is not eligible for voting." << std::endl;
    }

    return 0;
}


