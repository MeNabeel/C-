#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num > 0){
        if(num % 2 == 0){
            cout<<"Number is Positive Even"<<endl;
    }else{
        cout<<"Number is Positive Odd"<<endl;
    }
}else{
    if(num % 2 == 0){
        cout<<"Number is Negative Even"<<endl;
    }else{
        cout<<"Number is Negative Odd"<<endl;
    }
}
}