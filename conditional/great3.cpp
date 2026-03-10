#include<iostream>
using namespace std;
int main(){
int num1, num2,num3;
cout<<"Enter 1st number "<<endl;
cin>>num1;
cout<<"Enter 2nd Number "<<endl;
cin>>num2;
cout<<"Enter 3rd Number "<<endl;
cin>>num3;
if(num1>num2 && num1>num3){
    cout<<"Greater Num is "<<num1<<endl;
}else if(num2>num1 && num2>num3){
    cout<<"Greater Num is "<<num2<<endl;
}else{
    cout<<"Greater Num is "<<num3<<endl;    
}
}
