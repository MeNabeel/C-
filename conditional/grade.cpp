#include<iostream>
using namespace std;
        int main(){
            int marks;
            cout<<"Enter Marks: "<<endl;
            cin>>marks;
            if(marks>=90 && marks <=100){
                cout<<"Grade is A"<<endl;
            }else if(marks >=80 && marks <=89){
                cout<<"Grade is B"<<endl;
            }
            else if(marks >=70 && marks <=79){
                cout<<"Grade is C"<<endl;
            
            }else if(marks >=60 && marks<=69){
                cout<<"Grade is D"<<endl;
            }else{
                cout<<"Grade is F"<<endl;
            }
        
        
        }