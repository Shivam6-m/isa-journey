#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter numbers (0 to stop): ";
    do{
        cin>>num;
        if(num>0){
            sum+=num;
        }
        else if(num<0){
            cout<<"Negative ignored\n";
        }
    }while(num!=0);
    cout<<"Total sum = "<<sum<<endl;
    return 0;
}
