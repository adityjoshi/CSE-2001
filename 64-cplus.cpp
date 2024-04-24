#include <iostream>
using namespace std;

// Class template for a generic Pair
template<typename T>
class Pair {
private:
    T first;
    T second;
public:
    // Constructor
    Pair(T f, T s) : first(f), second(s) {}
    
    // Method to get the first element
    T getFirst() const {
        return first;
    }
    
    // Method to get the second element
    T getSecond() const {
        return second;
    }
};

int main() {
    // Create a Pair of integers
    Pair<int> intPair(5, 10);
    cout << "First: " << intPair.getFirst() << ", Second: " << intPair.getSecond() << endl;

    // Create a Pair of doubles
    Pair<double> doublePair(3.14, 6.28);
    cout << "First: " << doublePair.getFirst() << ", Second: " << doublePair.getSecond() << endl;

    return 0;
}

