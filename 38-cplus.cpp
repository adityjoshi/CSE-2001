#include <iostream>

class Increment {
private:
    int value;

public:
    // Constructor
    Increment(int value) : value(value) {}

    // Friend function to overload the unary operator ++
    friend Increment operator++(Increment& obj, int);

    // Getter method
    int getValue() const {
        return value;
    }
};

// Definition of the friend function to overload the unary operator ++
Increment operator++(Increment& obj, int) {
    Increment temp = obj; // Make a copy of the current object
    obj.value++; // Increment the value of the object
    return temp; // Return the copy (the value before increment)
}

int main() {
    // Creating an Increment object
    Increment obj(5);

    // Using the overloaded unary operator ++
    Increment result = obj++;

    // Displaying the result
    std::cout << "Original value: " << obj.getValue() << std::endl;
    std::cout << "Result value (after increment): " << result.getValue() << std::endl;

    return 0;
}

