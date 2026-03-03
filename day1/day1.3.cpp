#include <iostream>
using namespace std;

int main() {
    int n,i;
    int rev=0;
    cout << "enter the number ";
    cin >> n;
while(n != 0){
    int k=n%10;
    rev=rev*10+k;
n=n/10;
}
cout<<rev<<endl;

return 0;


}

    