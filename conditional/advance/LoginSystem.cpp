#include<iostream>
using namespace std;
int main(){
    int pin = 1234;
    string username = "admin";
    int inputPin;
    string inputUsername;
    
    cout << "===== LOGIN SYSTEM =====" << endl;
    cout << "Enter Username: ";
    cin >> inputUsername;     
    cout << "Enter Pin: ";
    cin >> inputPin;
    
    if(inputUsername == username && inputPin == pin){
        cout << "\n Login Successful! Welcome " << username << "!" << endl;
    }else{
        cout << "\n Login Failed! Invalid credentials." << endl;   
    }
    
    return 0;
}