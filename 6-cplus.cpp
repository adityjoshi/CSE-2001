#include <iostream>
using namespace std;

inline int evaluateExpression(int x, int y, int z, int p) {
    return x * y - z + p % y;
}

int main() {
    int x, y, z, p;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;
    cout << "Enter the value of p: ";
    cin >> p;

    int result = evaluateExpression(x, y, z, p);
    cout << "Result of the expression x * y - z + p % y is: " << result << endl;

    return 0;
}

