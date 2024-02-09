#include <iostream>

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            std::cout << "Access granted ";
        } else {
            throw 505;
        }
    }
    catch (...) {
        std::cout << "Access denied. You must be 18 years old." << std::endl;
    }

    return 0;
}

