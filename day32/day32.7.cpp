#include <iostream>
using namespace std;
int gcd(int a, int b){
 while(b != 0) {
 int rem = a % b;
    a=b;
 b=rem;
  }
    return a;
     }
int lcm(int a, int b) {
int g = gcd(a, b);
 return (a * b) / g;
      }
int main() {
 int n1, n2;
 cout<<"enter the value of n1 and n2";
 cin >> n1 >> n2;
 cout << lcm(n1, n2);
    }