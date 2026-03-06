// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin >>n;
//     for (int i=1; i<=n; i++){
//         for (int j =1; j<=i; j++){
//             cout<<"* ";
//         }
// cout<<endl;
//     }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
// int n ;
// cin >> n;
// for (int i =1;i<=n; i++){
//     for (int j=1;j<n-i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n ;
//      cin >>n;
//      for (int i=1; i<=n; i++){
//         for (int j =1; j<=i; j++){
//             cout<<j;
//          }
//  cout<<endl;
//     }
//  return 0;
// }
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n ;
//      cin >>n;
//      //upper half 
//      for (int i=1; i<=n; i++){
//         for (int j =1; j<=n-i; j++){
//             cout<<" ";}
//             for (int k =1;k<=i;k++){
//                 cout<<"*";
//             }
         
//  cout<<endl;
//     }
//     //lower half
// for (int i=n-1; i>=1; i--){

// for (int j =1; j<=n-i; j++){
//             cout<<" ";}


//         for (int k =1; k<=i; k++){
//             cout<<"*"<<" ";

//         }
// cout<<endl;
//     }
//  return 0;
// }
 
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"please shivam please enther the number-";
    cin>>n;
    for (i=1;i<=n;i++){
        for (j=n-1;j>=i;j--){
            cout<<" ";

        }
        for (k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
for (i=n-1;i>=1;i--){
    for (j=n-1;j>=i;j--){
        cout<<" ";
    }
    for(k=1;k<=i;k++){
        cout<<"* ";
    }
    cout<<endl;
}



return 0;
}