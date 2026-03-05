#include <iostream>
using namespace std;
int main() {
    int day;
    cin>>day;
cout << "School Week Activities:\n\n";
    for (int day = 1; day <= 5; day++) {
        if (day == 1)
            cout << "Monday: Assembly\n";
        else if (day == 2)
            cout << "Tuesday: Sports\n";
        else if (day == 3)
            cout << "Wednesday: Art Class\n";
        else if (day == 4)
            cout << "Thursday: Computer Lab\n";
        else if (day == 5)
            cout << "Friday: Music Class\n";
    }
    return 0;
}
