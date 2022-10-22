#include <iostream>

using namespace std;

int main() {
    int numEmployees = 3;
    double totalSalary = 0.0;
    double averageSalary;

    for (int i = 1; i <= numEmployees; i++) {
        double salary;
        cout << "Enter the salary of employee " << i << ": ";
        cin >> salary;
        totalSalary += salary;
    }

    averageSalary = totalSalary / numEmployees;

    cout << "The average salary of " << numEmployees << " workers are RM " << averageSalary << endl;

    return 0;
}