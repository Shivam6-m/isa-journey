#include<iostream>
using namespace std;
int fibbotriangle (int n){
   int a=0, b=1,c=0;
    for(int i =1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
        cout<<endl;
    }
    return c;

    }


int main()
{
int n;
cout<<"enter the number ";
cin>>n;
 fibbotriangle(n);
return 0;
}