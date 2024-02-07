#include <iostream>

// Function to find the greatest number among two numbers
int findGreatestNumber(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    // Input two numbers
    int number1, number2;

    std::cout << "Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Call the function to find the greatest number
    int greatestNumber = findGreatestNumber(number1, number2);

    // Display the result
    std::cout << "The greatest number is: " << greatestNumber << std::endl;

    return 0;
}

