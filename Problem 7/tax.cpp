#include <iostream>

using namespace std;

int main() {
    float tax_rate = 0.06;
    float total, total_after_tax;

    // cout << "Enter the total: ";
    cin >> total;

    total_after_tax = total + (total * tax_rate);

    cout << total_after_tax;
    // cout << "Total after tax: " << total_after_tax << endl;
}