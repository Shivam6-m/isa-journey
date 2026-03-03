#include <iostream>
using namespace std;
int countDigit(int n, int d) {
 int count = 0;
 while(n > 0) {
     if(n % 10 == d)
     count++;
      n = n / 10;
     }
    return count;
}
int main() {
 int n, d;
 cin >> n >> d;
 cout << countDigit(n, d);
    return 0;
}