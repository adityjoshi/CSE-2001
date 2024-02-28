#include <iostream>

// Forward declaration of class B
class B;

class A {
private:
    int value;
public:
    A(int val) : value(val) {}
    friend void minimum(const A& objA, const B& objB);
};

class B {
private:
    int value;
public:
    B(int val) : value(val) {}
    friend void minimum(const A& objA, const B& objB);
};

// Friend function to compare values of A and B
void minimum(const A& objA, const B& objB) {
    if (objA.value > objB.value)
        std::cout << "Value of class A is greater: " << objA.value << std::endl;
    else if (objA.value < objB.value)
        std::cout << "Value of class B is greater: " << objB.value << std::endl;
    else
        std::cout << "Values of class A and class B are equal: " << objA.value << std::endl;
}

int main() {
    A objA(5); // Create object of class A with value 5
    B objB(7); // Create object of class B with value 7
    
    // Call friend function to compare values
    minimum(objA, objB);

    return 0;
}

