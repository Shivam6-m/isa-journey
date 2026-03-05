#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 25, c = 15;
    int max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    cout << "Maximum = " << max;
}