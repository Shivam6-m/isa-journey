#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter numbers (0 to stop): ";
    cin>>num;
    while(num!=0){
        if(num>0)
            sum+=num;
        else
            cout<<"Negative ignored\n";
        cin>>num;
    }
    cout<<"Total sum = "<<sum<<endl;
    return 0;
}
