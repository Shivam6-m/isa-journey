#include <iostream>
using namespace std;
int main() {
    double balance, withdraw;
//now i start cout and cin
    cout << "Enter your account balance: ";
    cin >> balance;
//this is withdrawal ohk 
    cout << "Enter withdrawal amount: ";
    cin >> withdraw;
//this is for invalid ohk shivam 
    if (withdraw <= 0) {
        cout << "Invalid withdrawal amount!" << endl;
 }
 //this is for insufficient 
    else if (withdraw > balance) {
     cout << "Insufficient balance!" << endl;
    }
    //this is for logic where i put this withdraw %100 !=0 
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

    return 0;
}
