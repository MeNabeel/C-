#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers: "<<endl;
    cin>>a>>b>>c>>d;
    int largest = a;
    if(b > largest){
        largest = b;
    }
    if(c > largest){
        largest = c;
    }
    if(d > largest){
        largest = d;
    }
    cout<<"Largest number is: "<<largest<<endl;
    return 0;
}