#include<iostream>
using namespace std;

class HDFC{
    string name;
    string acc_num;
    string type;
    double balance = 0;

    public:
    void setData(){
        cout<<"Enter your name: ";
        cin>>name;

        cout<<"Enter acc number: ";
        cin>>acc_num;

        cout<<"Enter acc type: ";
        cin>>type;      
    }

    void deposite(){
        double dep;
        cout<<"Enter amount to deposite: ";
        cin>>dep;

        cout<<"Successfully deposited "<<dep<<" rupees "<<endl;
        balance = balance + dep;

        cout<<"Your current balance is "<<balance<<" rupees"<<endl;
    }

    void withdraw(){
        double with;
        cout<<"Enter amount to withdraw: ";
        cin>>with;

        if(with>balance){
            cout<<"Insufficient balance "<<endl;
        }
        else{
            cout<<"Successfully withdrawn "<<with<<" rupees "<<endl;
            balance = balance - with;

            cout<<"Your current balance is "<<balance<<" rupees"<<endl;
        }  
    }

    void checkBalance(){
        cout<<"your account balance is "<<balance<<endl;
    }
    
    void display(){
        cout<<"\n\nHello "<<name<<" , your details are:-"<<endl<<endl<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<acc_num<<endl;
        cout<<"Account type: "<<type<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};


int main(){
    
    HDFC cust1;

    cust1.setData();
    cust1.deposite();
    cust1.checkBalance();
    cust1.withdraw();
    cust1.display();


    return 0;
}


