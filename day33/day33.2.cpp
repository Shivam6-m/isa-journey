#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
int place=1;
while(n>0){
  
  int d=n%10;
  if(d==0)
     d = 5;
    ans = ans+d*place;
     place = place*10;
     n=n/10;
     }
 cout << ans;
}