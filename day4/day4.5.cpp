#include <iostream>
using namespace std;
int main() {
    int choice;
  float num1, num2;

  cout << "===== Simple Calculator =====" << endl;
    cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
 cout << "4. Division" << endl;
 cout << "Enter your choice (1-4): ";
    cin >> choice;

  cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (choice == 1) {
        cout << "Result: " << num1 + num2;
  }
    else if (choice == 2) {
        cout << "Result: " << num1 - num2;
   }
    else if (choice == 3) {
        cout << "Result: " << num1 * num2;
    }
    else if (choice == 4) {
        if (num2 != 0) {
        cout << "Result: " << num1 / num2;
        }
      else {
            cout << "Error! Division by zero is not allowed.";
        }
    }
    else {
        cout << "Invalid choice! Please select between 1 and 4.";
    }

    return 0;
}
