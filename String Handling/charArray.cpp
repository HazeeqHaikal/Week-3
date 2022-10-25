#include <iostream>
#include <string>

using namespace std;

int main() {
    // index of array starts from 0
    char greetings[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << "Greetings message: " << greetings << endl;
    cout << greetings << endl;

    return 0;
}