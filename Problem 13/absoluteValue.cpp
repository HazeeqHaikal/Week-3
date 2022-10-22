#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int x, y;

    cout << "Enter x value: ";
    cin >> x;

    cout << "Enter y value: ";
    cin >> y;

    // absolute value of x2 - y2
    cout << "Absolute value of x2 - y2: " << abs(x*x - y*y) << endl;
    return 0;

}
