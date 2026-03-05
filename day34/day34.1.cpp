#include <iostream>
using namespace std;
void checkEvenOdd(int n){
    if(n%2==0)
     cout<<"Number is Even";
    else
        cout<<"Number is Odd";
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    checkEvenOdd(num);
    return 0;
}
