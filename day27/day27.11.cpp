#include<iostream>
using namespace std;
int factorialn(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
fact *=i;
    }
    return fact;
}




int main()
{
    int n;
    cout<<"enter the number for factorial-";
    cin>>n;
    cout<<"the factorial of N number is "<<factorialn(n)<<endl;
return 0;
}