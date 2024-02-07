#include <iostream>
#include <cmath>

int main() {
    // Declare variables
    int x, y, z, P, q, r, p;

    // Input values
    std::cout << "Enter the value for x: ";
    std::cin >> x;

    std::cout << "Enter the value for y: ";
    std::cin >> y;

    std::cout << "Enter the value for z: ";
    std::cin >> z;

    std::cout << "Enter the value for P: ";
    std::cin >> P;

    std::cout << "Enter the value for q: ";
    std::cin >> q;

    std::cout << "Enter the value for r: ";
    std::cin >> r;

    // Evaluate the expression
    p = std::pow(x, 3) + (y + z) - (P % q) + r;
    // Output the result
    std::cout << "The result of the expression p = x^3 + (y+z) - (P%q) + r is: " << p << std::endl;

    return 0;
}

