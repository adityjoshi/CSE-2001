#include <iostream>

using namespace std;

class Animal {
public:
    virtual void animalSound() {
        cout << "This is the sound of an animal" << endl;
    }
};

class Cat : public Animal {
public:
    void animalSound() override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void animalSound() override {
        cout << "Woof" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Cat cat;
    Dog dog;

    animalPtr = &cat;
    animalPtr->animalSound(); 

    animalPtr = &dog;
    animalPtr->animalSound();

    return 0;
}

