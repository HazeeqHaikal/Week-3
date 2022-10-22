#include <iostream>

using namespace std;

int main()
{
    double radius, volume;
    const double PI = 3.14159;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    cout << "The volume of the sphere is " << volume << endl;

    return 0;
}