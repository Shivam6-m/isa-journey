#include <iostream>
using namespace std;
int main() {
 int choice;
    float num1, num2;

    do {
 cout << "\n===== Simple Calculator =====" << endl;
 cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
 cout << "4. Division" << endl;
 cout << "5. Exit" << endl;
  cout << "Enter your choice (1-5): ";
      cin >> choice;

  if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
     cin >> num1 >> num2;
        }
    if (choice == 1) {
            cout << "Result: " << num1 + num2 << endl;
        }
  else if (choice == 2) {
            cout << "Result: " << num1 - num2 << endl;
        }
else if (choice == 3) {
            cout << "Result: " << num1 * num2 << endl;
        }
           else if (choice == 4) {
      if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
     }
            else {
       cout << "Error! Division by zero is not allowed." << endl;
            }
        }
      else if (choice == 5) {
            cout << "Exiting Calculator... Thank you!" << endl;
        }
   else {
      cout << "Invalid choice! Please select between 1 and 5." << endl;
        }

 } while (choice != 5);

    return 0;
}
