#include <iostream>

template<typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intNum1 = 5, intNum2 = 10;
    float floatNum1 = 3.14, floatNum2 = 6.28;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "intNum1 = " << intNum1 << ", intNum2 = " << intNum2 << std::endl;
    std::cout << "floatNum1 = " << floatNum1 << ", floatNum2 = " << floatNum2 << std::endl;

    swapValues(intNum1, intNum2);
    swapValues(floatNum1, floatNum2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "intNum1 = " << intNum1 << ", intNum2 = " << intNum2 << std::endl;
    std::cout << "floatNum1 = " << floatNum1 << ", floatNum2 = " << floatNum2 << std::endl;

    return 0;
}

