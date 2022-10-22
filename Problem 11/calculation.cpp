#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    float num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    result = sqrt(num1 - num2);

    cout << "Result: " << result << endl;
    return 0;
}