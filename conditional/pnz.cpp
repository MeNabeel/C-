#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0){
        cout<<"Number is Positive"<<endl;
    }else if(num<0){
        cout<<"Number is negative"<<endl;
    }else{
        cout<<"Number is Zero";
    }
}