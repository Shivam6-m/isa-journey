#include <iostream>
using namespace std;
int main() {
 int number, reverse = 0;  
 cout << "Enter a number: ";
 cin >> number;
    int sign = 1;
    if (number < 0) {
        sign = -1;
   number = -number; 
          // Make number positive
    }
 while (number != 0) {
 reverse = reverse * 10 + (number % 10);
        number /= 10;
    }
 cout << "Reversed number: " << sign * reverse;

    return 0;
    }
