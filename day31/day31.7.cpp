#include <iostream>
using namespace std;
int main() {
    int pin;
    const int correctPin = 1234; // preset PIN
    double balance, withdraw;
    cout << "Enter your PIN: ";
    cin >> pin;
    if (pin == correctPin) {
    cout << "PIN accepted.\n";
    cout << "Enter your account balance: ";
     cin >> balance;
//this is for withdrawal
        cout << "Enter withdrawal amount: ";
        cin >> withdraw;
        //this is logic i put
     if (withdraw <= 0) {
       cout << "Invalid withdrawal amount!" << endl;
      }
     else if (withdraw > balance) {
          cout << "Insufficient balance!" << endl;
        }
     else if ((int)withdraw % 100 != 0) {
         cout << "Amount must be in multiples of 100!" << endl;
        }
     else if (balance - withdraw < 1000) {
           cout << "Minimum balance of 1000 must be maintained!" << endl;
        }
        else {
     balance -= withdraw;
      cout << "Withdrawal successful!" << endl;
         cout << "Remaining balance: " << balance << endl;
        }

    } else {
        cout << "Incorrect PIN! Access denied." << endl;
    }

    return 0;
}
