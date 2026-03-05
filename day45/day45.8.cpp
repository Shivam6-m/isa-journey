#include<iostream>
using namespace std;
<<<<<<< HEAD
int main()
{
    int marks[5]={99,100,54,36,88};
    marks[0]=102;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    // valid index of array is 0 to size-1
=======

int fibbo (int n){
//base case 
if (n==0 or n==1){
    return n;
}
return fibbo(n-1)+fibbo(n-2);
}


int main()
{
int n;
cin>>n;
 int  g=0;
for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout<<fibbo(g)<<" ";
        g++;
    }
    cout<<endl;
}
>>>>>>> 1633644 (March day3 C++ practice)

return 0;
}