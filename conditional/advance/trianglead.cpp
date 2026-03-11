#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter side 1: "<<endl;
    cin>>a;
    cout<<"Enter side 2: "<<endl;
    cin>>b;
    cout<<"Enter side 3: "<<endl;
    cin>>c;
    
    // Find the longest side
    int longest = a;
    int side1 = b;
    int side2 = c;
    
    if(b > longest){
        longest = b;
        side1 = a;
        side2 = c;
    }
    if(c > longest){
        longest = c;
        side1 = a;
        side2 = b;
    }
    
    // Now apply Pythagorean theorem with longest side
    if(side1*side1 + side2*side2 == longest*longest){
        cout<<"Right Triangle"<<endl;
    }else if(side1*side1 + side2*side2 > longest*longest){
        cout<<"Acute Triangle"<<endl;
    }else{
        cout<<"Obtuse Triangle"<<endl;
    }
    
    return 0;
}