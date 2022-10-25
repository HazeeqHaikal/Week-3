#include <cmath>
#include <iostream>
#include <string>

using namespace std;

#define PI 3.14159265358979323846
// const double PI = 3.14159;
const char newline = '\n';

int main() {
    string name;
    double radius, volume;

    cout << "Enter your name: ";
    // input long name
    getline(cin, name);

    cout << "Welcome " << name << newline;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << fixed << "The volume of the sphere is " << volume << endl;

    return 0;
}