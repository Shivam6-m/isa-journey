#include<iostream>
using namespace std;
int binarytodecimal(int binnum){
int ans=0,power=1;
while(binnum>0){
    int rem=binnum%10;
    ans+=rem*power;
binnum/=10;
power*=2;
}
return ans;
}
int main()
{
    int x;
int binnum=x;
cout<<"enter the x number ";
cin>>x;
cout<<binarytodecimal(x)<<endl;
return 0;
}