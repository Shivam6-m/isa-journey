#include <iostream>
using namespace std;

int main() {
int n ;
 cout<<"enter the N number :- ";
 cin>>n;
    // Upper half
    for(int i = 1; i <= n; i++) {
  // Left stars
     for(int j = 1; j <= i; j++) {
     if(j == 1 || j == i)
         cout << "*";
  else
     cout << " ";
 }
     // Middle spaces
for(int j = 1; j <= 2*(n - i); j++) {
   cout << " ";
      }
  // Right stars
 for(int j = 1; j <= i; j++) {
    if(j == 1 || j == i)
      cout << "*";
  else
         cout << " ";
        }
 cout << endl;
    }
 // Lower half
    for(int i = n; i >= 1; i--) {
    // Left stars
      for(int j = 1; j <= i; j++) {
 if(j == 1 || j == i)
                cout << "*";
else
                cout << " ";
        }   // Middle spaces
 for(int j = 1; j <= 2*(n - i); j++) {
                   cout << " ";
        }
        // Right stars
    for(int j = 1; j <= i; j++) {
 if(j == 1 || j == i)
                cout << "*";
  else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
