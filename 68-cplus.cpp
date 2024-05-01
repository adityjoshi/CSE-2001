#include <iostream>
using namespace std;
// Template base class
template<typename T>
class Base {
protected:
T data;
public:
Base(T d) : data(d) {}
void display() {
cout << "Data: " << data << endl;
}
};
// Derived class from Base template
class Derived : public Base<int> {
private:
int value;
public:
Derived(int d, int v) : Base<int>(d), value(v) {}
void show() {
cout << "Derived Data: " << data << ", Value: " << value << endl;
}
};
int main() {
// Create objects of Base and Derived classes
Base<double> base(3.14);
base.display();
Derived derived(10, 20);
derived.display(); // Accessing base class function
derived.show(); // Accessing derived class function
return 0;
}
