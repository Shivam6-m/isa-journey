#include <iostream>
using namespace std;
void checkNumber(int n){
    if(n>0)
      cout<<"Positive number";
    else if(n<0)
     cout<<"Negative number";
    else
        cout<<"Zero";
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    checkNumber(num);
    return 0;
}
