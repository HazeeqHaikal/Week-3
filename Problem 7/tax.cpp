#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    float tax_rate = 0.06;
    float total, total_after_tax;

    cout << "Enter the total: ";
    cin >> total;

    total_after_tax = total + (total * tax_rate);

    cout << setprecision(2) << fixed;
    cout << "Total after tax: RM" << total_after_tax << endl;
}