#include<iostream>
using namespace std;

class Bank{
    private:

    string name;
    long int acc_num;
    string type;
    double balance; 

    public:

    void assign(){
        cout<<"Enter your name: ";
        cin>>name;

        cout<<"Enter your acc number: ";
        cin>>acc_num;

        cout<<"Enter your acc type: ";
        cin>>type;

        cout<<"Enter your initial balance: ";
        cin>>balance;        
    }  
    void deposite(){
        int dep;
        cout<<"Enter amount to deposite: ";
        cin>>dep;

        if(dep<0){
            cout<<"Invailid input :("<<endl;
            // return;
        }
        else{
            balance = balance + dep;
        }    
    }
    void withdraw(){
        int w;
        cout<<"Enter amount to withdraw: ";
        cin>>w;

        if(w>balance){
            cout<<"Insufficient balance :(";
        }
        else{
            balance = balance - w;
        }
    }
    void display(){
        cout<<"\n Your details are:-"<<endl<<endl<<endl;

        cout<<"Name: "<<name<<endl;
        cout<<"Account number: "<<acc_num<<endl;
        cout<<"Account type: "<<type<<endl;
        cout<<"Balance: "<<balance<<endl;

        cout<<"\nThank you :)"<<endl;
    }
};


int main(){

    Bank cust2;

    cust2.assign();

    cust2.deposite();

    cust2.withdraw();

    cust2.display();

    // 

    // cust2.display();
 
}

