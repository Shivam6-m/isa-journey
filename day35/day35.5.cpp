#include <iostream>
using namespace std;
int main() {
    int a, b, choice;
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
        cout << "Do you want to continue? (1 = Yes, 0 = No): ";
        cin >> choice;
    } while (choice == 1);
    return 0;
}
