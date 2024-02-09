// write a c++ program to check the exceptional handling fuction divide by 0 using try throw and catch

#include <iostream>
#include <stdexcept>

int divide(int x, int y) {
    if (y == 0) {
        throw std::runtime_error("Division by zero");
    }
    return x / y;
}

int main() {
    try {
        int result = divide(10, 0);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

