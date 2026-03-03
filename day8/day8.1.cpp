#include <iostream>
using namespace std;
int findGCD(int a,int b){
 while(b!= 0){
    int temp = b;
     b=a%b;
       a=temp;
    }
    return a;
}
int main(){
int n1,n2;
 cin>>n1>>n2;
cout<<findGCD(n1,n2);
    return 0;
}