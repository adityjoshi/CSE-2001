#include <iostream>
using namespace std;

inline int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = gcd(num1, num2);
    cout << "Greatest Common Divisor (GCD) of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
