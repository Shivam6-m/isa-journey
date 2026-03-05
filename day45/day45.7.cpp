<<<<<<< HEAD
#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<j;
        for(int j=i-1;j>=1;j--)
            cout<<j;/////
        cout<<endl;
    }
=======
#include<iostream>
using namespace std;

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
for(int i=0;i<n;i++){
    cout<<fibbo(i)<<" ";
}

return 0;
>>>>>>> 1633644 (March day3 C++ practice)
}