#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cin >> n;
    temp = n;
    while(n != 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    if(sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}