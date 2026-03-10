#include<iostream>
using namespace std;
int main(){
    double unit;
    cout<<"Enter Consumed units:"<<endl;
    cin>>unit;
    double bill;
    if(unit<=100){
        bill=unit*0.5;
    }else if(unit>100 && unit<=200){
        bill=100*0.5+(unit-100)*0.75;
    }else if(unit>200 && unit<=300){
        bill=100*0.5+100*0.75+(unit-200)*1.20;
    }else{  
        bill=100*0.5+100*0.75+100*1.20+(unit-300)*1.50;
    }
    cout<<"Total Bill: "<<bill<<endl;
}