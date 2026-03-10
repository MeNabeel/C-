#include<iostream>
using namespace std;
int main(){
   int side1, side2, side3;
   cout<<"Enter Side 1 :"<<endl;
   cin>>side1;
   cout<<"Enter Side 2 :"<<endl;
   cin>>side2;
   cout<<"Enter Side 3 :"<<endl;
   cin>>side3;
    // checking if triangle or its types 
    if(side1== side2 && side1 == side3){
        cout<<"Equilateral Triangle"<<endl;
    }else if (side1 == side2 || side1==side3 || side2== side3){
        cout<<"Isosceles Triangle"<<endl;
    }else{
        cout<<"Scalene Triangle"<<endl;
    }   
}