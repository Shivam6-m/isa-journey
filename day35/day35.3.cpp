#include <iostream>
using namespace std;
int main() {
 int number;
cout << "***** Welcome to Kids Quiz *****" << endl;
cout << "Enter a number between 1 to 10: ";
 cin >> number;
    if (number == 1)
        cout << "Q1: What is 1 + 1 ?" << endl;
    else if (number == 2)
        cout << "Q2: What color is the sky?" << endl;
    else if (number == 3)
        cout << "Q3: How many days are there in a week?" << endl;
    else if (number == 4)
        cout << "Q4: What is 5 - 2 ?" << endl;
    else if (number == 5)
        cout << "Q5: Name the national animal of India." << endl;
    else if (number == 6)
        cout << "Q6: What comes after 9?" << endl;
    else if (number == 7)
        cout << "Q7: How many legs does a dog have?" << endl;
    else if (number == 8)
        cout << "Q8: What is 3 + 4 ?" << endl;
    else if (number == 9)
        cout << "Q9: Which festival is known as festival of lights?" << endl;
    else if (number == 10)
        cout << "Q10: How many months are there in a year?" << endl;
    else
        cout << "Invalid number! Please enter number between 1 to 10." << endl;
    return 0;
}
