#include<iostream>
#include<cctype>
using namespace std;
int main(){
char ch;
cout<<"Enter a Charcter "<<endl;
cin>>ch;
char lower_ch=tolower(ch);
if(lower_ch=='a' || lower_ch=='e' || lower_ch=='i' || lower_ch=='o' || lower_ch=='u'){
    cout<<"Is Vovel"<<endl;
}else{
    cout<<"Is Consonant"<<endl;
}

}