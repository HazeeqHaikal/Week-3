#include <iostream>

using namespace std;

int main() {
    int x, y, answer;

    cout << "Enter x value: ";
    cin >> x;

    cout << "Enter y value: ";
    cin >> y;

    answer = x * (y + 2);

    cout << "The answer to x * (y + 2) is: " << answer << endl;

    return 0;
}