#include <iostream>
using namespace std;

inline int calculateExpression(int x, int y) {
    int x3 = x * x * x;
    int y3 = y * y * y;
    int term1 = x3 + y3;
    int term2 = 3 * x * x * y;
    int term3 = 3 * x * y * y;
    return term1 + term2 + term3;
}

int main() {
    int x, y;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    int result = calculateExpression(x, y);
    cout << "Result of the expression (x + y)^3 = x^3 + y^3 + 3x^2y + 3xy^2 is: " << result << endl;

    return 0;
}

