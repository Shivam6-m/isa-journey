#include<iostream>
using namespace std;
<<<<<<< HEAD
int main()
{
    int size=5;
    int marks[size];
    for(int i=0;i<size;i++){
cin>>marks[i];
    }
    // o to size-1;
    for(int i =0;i<size;i++){
        cout<<marks[i]<<endl;
    }
=======
int rev (int n){
    int rev =0;
    while(n!=0){
    int k=n%10;
    rev=rev*10+k;
    n=n/10;

    }

return rev;
}
int main()

{
    int n;
    cin >>n;
    int bn=1;
    while(n>0){
        int k=n%2;
        bn= bn*10+k;
        n=n/2;

    }
    cout<<rev(bn)/10<<endl;
>>>>>>> 1633644 (March day3 C++ practice)
return 0;
}