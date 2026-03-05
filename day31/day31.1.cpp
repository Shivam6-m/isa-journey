#include <iostream>
using namespace std;
int main() {
 int number, reverse = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;
    while (number != 0) {
        remainder = number % 10;     
           // Get last digit
 reverse = reverse * 10 + remainder; 

        number = number / 10;          // Remove last digit
    }

 cout << "Reversed number: " << reverse << endl;

    return 0;
}
