#include <iostream>
using namespace std;

int calculateExpression(int x, int y, int z, int w) {
    return x + y + z + w;
}

int main() {
    int x, y, z, w;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;
    cout << "Enter the value of w: ";
    cin >> w;
    
    int result = calculateExpression(x, y, z, w);
    cout << "Result of the expression x + y + z + w is: " << result << endl;

    return 0;
}

