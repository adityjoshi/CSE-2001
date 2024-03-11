#include <iostream>

class Increment {
private:
    int value;

public:
    Increment(int value) : value(value) {}

    friend Increment operator++(Increment& obj, int);

    int getValue() const {
        return value;
    }
};

Increment operator++(Increment& obj, int) {
    Increment temp = obj; 
    obj.value++; 
    return temp; 
}

int main() {
    Increment obj(5);

    Increment result = obj++;

    std::cout << "Original value: " << obj.getValue() << std::endl;
    std::cout << "Result value (after increment): " << result.getValue() << std::endl;

    return 0;
}

