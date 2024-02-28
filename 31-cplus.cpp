#include <iostream>

class Printer; // Forward declaration of Printer class

class Counter {
private:
    int count;

    // Declaring Printer class as a friend
    friend class Printer;

public:
    Counter() : count(0) {}

    void increment() {
        count++;
    }
};

class Printer {
public:
    void printCount(const Counter& counter) {
        std::cout << "Count: " << counter.count << std::endl;
    }
};

int main() {
    Counter myCounter;
    Printer myPrinter;

    myCounter.increment(); // Increment count
    myPrinter.printCount(myCounter); // Print count using Printer class

    return 0;
}

