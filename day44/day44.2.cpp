#include<iostream>
<<<<<<< HEAD
using namespace std;
int main()
{
int a =6,b=10;
cout<<(a|b)<<endl;
=======
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;
bool ans=true;
for(int i=2;i<=sqrt(n); i++){

if(n%i==0){
    ans=false;

}
}
if(ans==true){
    cout<<"prime hai"<<endl;

}
else{
    cout<<"prime nahi hai"<<endl;
}



>>>>>>> 1633644 (March day3 C++ practice)
return 0;
}