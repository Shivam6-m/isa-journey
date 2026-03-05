#include<iostream>
using namespace std;
int sumofdigit(int num){
    int digitsum=0;
    while (num>0)
    {
       int lastdigit=num%10;
    num/=10;
     digitsum +=lastdigit;
    }
    return digitsum;

}
int main()
{
int n;
cout<<"enter the n number ";
cin>>n;
cout<<"the sum of n digit number is "<<sumofdigit(n)<<endl;


return 0;
}
