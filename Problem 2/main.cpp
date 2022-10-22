#include <iostream>

using namespace std;

int main() {
    int x, y, answer;

    cout << "Enter x value: ";
    cin >> x;

    cout << "Enter y value: ";
    cin >> y;

    answer = (x * 6) + (y * 2);

    cout << "The answer to 6 * x + 2 * y is: " << answer << endl;

    return 0;
}