#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int numEmployees = 3;
    double totalSalary = 0.0;
    double averageSalary;
    double salary;
    string name;

    for (int i = 0; i <= numEmployees - 1; i++) {
        cout << "Enter the name of employee " << i + 1 << ": ";
        cin >> name;

        cout << "Welcome " << name << endl;

        cout << "Enter the salary of employee " << i + 1 << ": ";

        cin >> salary;
        totalSalary += salary;
    }

    averageSalary = totalSalary / numEmployees;

    cout << fixed << setprecision(2);
    cout << "The average salary for " << numEmployees << " workers are RM " << averageSalary << endl;

    return 0;
}