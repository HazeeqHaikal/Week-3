#include <iostream>

using namespace std;

int main() {
    int a, b, c, answer;

    // b2 - 4ac
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    answer = (b * b) - (4 * a * c);
    
    cout << "The answer to b2 - 4ac is: " << answer << endl;

    return 0;
}