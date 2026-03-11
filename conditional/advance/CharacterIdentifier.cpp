#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"Character is an Upper Alphabet"<<endl;
}else if(ch >= 'a' && ch <= 'z'){
        cout<<"Character is a Lower Alphabet"<<endl;
}else if(ch >= '0' && ch <= '9'){
        cout<<"Character is a Digit"<<endl;
}else{
        cout<<"Character is a Special Character"<<endl;}
    }