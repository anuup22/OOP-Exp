#include<iostream>
using namespace std;

class HDFC{
    private:
    string name;
    long int accNumber;
    string accType;
    float accBalance; //max balance can not be more than 9,99,999

    public:
    void setData();
    void deposite();
    void checkBalance();
    void withdraw();
    void showData();
};

void HDFC::setData(){

}
void HDFC::deposite(){

}
void HDFC::checkBalance(){

}
void HDFC::withdraw(){

}
void HDFC::showData(){
    
}

int main(){
    float acc_balance;
    cin>>acc_balance;
    cout<<acc_balance;
    return 0;
}