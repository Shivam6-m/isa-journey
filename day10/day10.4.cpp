#include <iostream>
#include <string>
using namespace std;
int main(){
int number;
 string answer;
    cout << "***** Welcome to Kids Quiz *****" << endl;
    cout << "Enter a number between 1 to 5: ";
    cin >> number;
 if (number == 1) {
        cout << "Q1: What is 1 + 1 ? ";
        cin >> answer;
     if (answer == "2")
            cout << "Yes! The answer is correct." << endl;
     else
            cout << "Wrong answer." << endl;
    }
 else if (number == 2) {
        cout << "Q2: What color is the sky? ";
        cin >> answer;
        if (answer == "blue")
            cout << "Yes! The answer is correct." << endl;
        else
            cout << "Wrong answer." << endl;
    }
 else if (number == 3) {
        cout << "Q3: How many days are there in a week? ";
        cin >> answer;
     if (answer == "7")
            cout << "Yes! The answer is correct." << endl;
     else
            cout << "Wrong answer." << endl;
    }
else if (number == 4) {
        cout << "Q4: What is 5 - 2 ? ";
        cin >> answer;
     if (answer == "3")
            cout << "Yes! The answer is correct." << endl;
     else
            cout << "Wrong answer." << endl;
    }
 else if (number == 5) {
        cout << "Q5: How many months are there in a year? ";
        cin >> answer;
    if (answer == "12")
            cout << "Yes! The answer is correct." << endl;
     else
            cout << "Wrong answer." << endl;
    }
 else {
        cout << "Invalid number! Please enter between 1 to 5." << endl;
    }

    return 0;
}
