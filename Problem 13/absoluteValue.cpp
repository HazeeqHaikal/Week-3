#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y;

    cout << "Enter x value: ";
    cin >> x;

    cout << "Enter y value: ";
    cin >> y;

    // absolute value of x2 - y2
    cout << "abs(" << x << " - " << y << ") = " << abs(x - y) << endl;
    
    return 0;
}
