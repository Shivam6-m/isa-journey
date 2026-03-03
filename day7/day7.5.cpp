#include <iostream>
using namespace std;
int main() {
 int minF, maxF, step;
cin >> minF >> maxF >> step;
    int f = minF;
 while(f <= maxF){
    int c = (5 * (f - 32)) / 9;
     cout << f << " " << c << endl;
        f += step;
     }
    return 0;
}