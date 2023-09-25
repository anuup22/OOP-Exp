#include<iostream>
using namespace std;

class bank{
    string name;
    int acc_no;
    string type;

    public:
    void setdata(){
        cout<<"enter the name : ";
        cin>>name;

        cout<<"enter acc no ";
        cin>>acc_no;

        cout<<"enter the type";
        cin>>type;

    void getdata(){
        cout<<"account name : "<<name<<endl;
        cout<<"account number is : "<<acc_no<<endl;
        cout<<"account type is : "<<type<<endl;


    };


    }

}
int main(){
    
    bank b1;
    b1.setdata();
    b1.getdata();
    return 0;
}