#include <iostream>
using namespace std;

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

int main() {
    Complex num1, num2, result;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.imag;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.imag;

    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    cout << "Sum = " << result.real << " + " << result.imag << "i";

    return 0;
}

