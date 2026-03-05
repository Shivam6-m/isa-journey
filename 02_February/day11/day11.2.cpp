#include <iostream>
using namespace std;
int main() {
    int a, b;
    do {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (a > b) {
            cout << "Bigger number is: " << a << endl;
        } else if (b > a) {
            cout << "Bigger number is: " << b << endl;
        } else {
            cout << "Both numbers are equal." << endl;
        }
    } while (false);  // Runs only once

    return 0;
}
