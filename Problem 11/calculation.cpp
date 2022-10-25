#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    result = sqrt(num1 - num2);
    cout << "sqrt(" << num1 << " - " << num2 << ") = " << result << endl;

    return 0;
}