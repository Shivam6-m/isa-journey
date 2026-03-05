#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
int minoftwo(int a,int b){
    if (a<b){
        return a;
    }else {
        return b;
    }
}

int main()
{
cout<<"the number of two number is "<<minoftwo(9,7)<<endl;
return 0;
}