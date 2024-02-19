#include <iostream>
#include <string>
using namespace std;

// Class to represent a car
class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor to initialize the car details
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    // Function to display car details
    void displayDetails() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Year of Manufacturing: " << year << endl;
    }
};

int main() {
    // Creating an object of class Car and passing values to the constructor
    Car myCar("Toyota", "Camry", 2022);

    // Displaying car details
    cout << "Car Details:" << endl;
    myCar.displayDetails();

    return 0;
}

