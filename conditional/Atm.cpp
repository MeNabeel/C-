#include<iostream>
using namespace std;
int main(){
    int pin;
    cout<<"Set your $ digit pin: "<<endl;
    cin>>pin;
    int entered_pin;
    cout<<"Enter your pin "<<endl;
    cin>>entered_pin;
    double balance = 0;
    if(entered_pin == pin){
        cout<<"pin is correct: "<<endl;
        int choice;
        cout<< "1. Depsit: "<<endl;
        cout<<"2. Withdraw: "<<endl;
        cout<<"3. Check Balance: "<<endl;
        cout<<"4. Change Pin: "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                double deposit_amount;
                cout<<"enter DEPOSIT amount"<<endl;
                cin>>deposit_amount;
                balance+=deposit_amount;
                cout<<"Deposit successful. Current Balance: "<<balance<<endl;
                break;
            case 2:
                double withdraw_amount;
                cout<<"Enter WITHDRAW amount"<<endl;
                cin>>withdraw_amount;
                if(withdraw_amount<=balance){
                    balance-=withdraw_amount;
                    cout<<"Withdraw successful. Current Balance: "<<balance<<endl;
                }else{
                    cout<<"Insufficient Balance"<<endl;
                }
                break;
            case 3:
                cout<<"Current Balance: "<<balance<<endl;   
                break;
            case 4:
                int new_pin;
                cout<<"Enter New Pin: "<<endl;
                cin>>new_pin;
                pin=new_pin;
                cout<<"Pin Changed Successfully"<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;   
        }
    }
}