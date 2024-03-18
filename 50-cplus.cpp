#include <iostream>

using namespace std;

class Animal {
public:
    // Virtual function to make it polymorphic
    virtual void animalSound() {
        cout << "This is the sound of an animal" << endl;
    }
};

class Cat : public Animal {
public:
    // Redefining animalSound for Cat
    void animalSound() override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    // Redefining animalSound for Dog
    void animalSound() override {
        cout << "Woof" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Cat cat;
    Dog dog;

    animalPtr = &cat;
    animalPtr->animalSound(); // Output will be "Meow"

    animalPtr = &dog;
    animalPtr->animalSound(); // Output will be "Woof"

    return 0;
}

