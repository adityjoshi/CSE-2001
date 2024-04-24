#include <iostream>
using namespace std;

template<class T1, class T2>
class Example {
    T1 x;
    T2 y;

public:
    Example(T1 a, T2 b) {
        x = a;
        y = b;
    }
    
    void show() {
        cout << x << " and " << y << "\n";
    }
};

int main() {
    Example<float, int> test1(3.45, 345);
    Example<int, char> test2(100, 'm');

    test1.show();
    test2.show();

    return 0;
}

