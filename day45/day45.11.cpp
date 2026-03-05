#include<iostream>
using namespace std;
<<<<<<< HEAD
int main()
{
    int nums[]={5,15,22,1,-15,-24};
    int size=6;
    int smallest= INT_MAX;
    for (int i=0;i<size ;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    cout<<"smallest ="<<smallest<<endl;
=======
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
>>>>>>> 1633644 (March day3 C++ practice)
return 0;
}