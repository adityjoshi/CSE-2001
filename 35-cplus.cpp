#include <iostream>

void printValue(int x) {
    std::cout << "Value: " << x << std::endl;
}

void printValue(float x) {
    std::cout << "Value: " << x << std::endl;
}

int main() {
    int intValue = 5;
    float floatValue = 3.14f; 

   printValue(intValue);

    printValue(floatValue);

    return 0;
}

