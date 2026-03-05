#include<iostream>
using namespace std;
int dectobinary(int decnum){
   int ans=0; // this is for binary
   int power=1; // this is for multiply 10^0  - 10^1.....
   while(decnum>0){
   int rem=decnum%2;
decnum /=2;
ans+=(rem*power);
power=power*10;
   }
   return ans;
}
int main(){
    int x;
    int decnum=x;
    
cout<<"enter the n number  ";
cin>>x;
for(int i=1;i<=x;i++){
   cout<<dectobinary(i)<<endl;
   
}
return 0;
}