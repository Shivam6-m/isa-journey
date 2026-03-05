#include <iostream>
using namespace std;

int main() {

    int rows = 5;
    int cols = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {

  // Head
 if(i == 1 && j == 3)
     cout << "*";
 // Hands
  else if(i == 2 && (j == 2 || j == 3 || j == 4))
          cout << "*";
    // Body
     else if(i == 3 && j == 3)
                cout << "*";

    // Upper legs
 else if(i == 4 && (j == 2 || j == 4))
           cout << "*";

            // Lower legs
 else if(i == 5 && (j == 1 || j == 5))
          cout << "*";

      else
       cout << " ";
        }
        cout << endl;
    }

    return 0;
}
