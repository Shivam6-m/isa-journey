#include <iostream>
using namespace std;
int main() {
  int rows;
 cout << "Enter number of rows: ";
 cin >> rows;
for(int i = 1; i <= rows; i++) {
        // Print left spaces
     for(int j = 1; j <= rows - i; j++) {
     cout << " ";
        }
        // Print numbers and inside spaces
      for(int k = 1; k <= 2*i - 1; k++) {
      if(k == 1 || k == 2*i - 1 || i == rows) {
        cout << k;
       } else {
         cout << " ";
    }
  }

  cout << endl;
 }
    return 0;
}
