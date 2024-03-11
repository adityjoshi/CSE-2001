#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imaginary;
    }
};

int main() {
    Complex num1(3.0, 2.0);
    Complex num2(1.0, 4.0);

    Complex sum = num1 + num2;
 
    std::cout << "Sum: " << sum.getReal() << " + " << sum.getImaginary() << "i" << std::endl;

    return 0;
}

