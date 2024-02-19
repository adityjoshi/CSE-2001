#include <iostream>
using namespace std;

// Structure to represent a complex number
struct Complex {
    double real;
    double imag;
};

int main() {
    Complex num1, num2, result;

    // Input for the first complex number
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.imag;

    // Input for the second complex number
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.imag;

    // Perform subtraction
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;

    // Display the result
    cout << "Result: " << result.real << " + " << result.imag << "i" << endl;

    return 0;
}

