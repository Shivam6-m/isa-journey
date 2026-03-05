#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
  cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
   cout << "Enter two numbers: ";
    cin >> num1 >> num2;

   if (op == '+') {
        cout << "Result: " << num1 + num2;
   }
    else if (op == '-') {
        cout << "Result: " << num1 - num2;
  }
    else if (op == '*') {
        cout << "Result: " << num1 * num2;
    }
      else if (op == '/') {
        if (num2 != 0) {
          cout << "Result: " << num1 / num2;
        }
        else {
            cout << "Error! Division by zero is not allowed.";
        }
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}
