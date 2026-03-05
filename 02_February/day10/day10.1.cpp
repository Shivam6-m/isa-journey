#include <iostream>
#include <string>
using namespace std;
int main(){
 int totalStudents;
int ashokaCount = 0;
int tenorCount = 0;
int shivajiCount = 0;
int ramanCount = 0;
 cout << "Enter total number of students: ";
   cin >> totalStudents;
 for (int i = 1; i <= totalStudents; i++) {
        string houseName;
        cout << "Enter house name for student " << i 
             << " (Ashoka/Tenor/Shivaji/Raman): ";
        cin >> houseName;
        if (houseName == "Ashoka") {
            ashokaCount++;
        }
        else if (houseName == "Tenor") {
            tenorCount++;
        }
        else if (houseName == "Shivaji") {
            shivajiCount++;
        }
        else if (houseName == "Raman") {
            ramanCount++;
        }
        else {
            cout << "Invalid house name entered!" << endl;
        }
    }
    cout << "\nNumber of students in each house:" << endl;
    cout << "Ashoka: " << ashokaCount << endl;
    cout << "Tenor: " << tenorCount << endl;
    cout << "Shivaji: " << shivajiCount << endl;
    cout << "Raman: " << ramanCount << endl;

    return 0;
}
