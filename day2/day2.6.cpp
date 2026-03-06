#include<iostream>
using namespace std;
int  sum(int n ){
   int sum =0;
   for (int i=1;i<=n;i++){
    sum += i;
}
   return sum ; 
}

int main()
{
   int n;
   
cout<<"enter the N number ";
cin>>n;
cout<<"the sum of number is "<<sum(n)<<endl;
return 0;
}