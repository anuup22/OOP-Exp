#include <iostream>
using namespace std;

class person{
    protected: //members are private for person but inheritable
    string name;
    int p_code;
};
class account:virtual public person{
    protected:
    double pay;
};
class admin:virtual public person{
    protected:
    int experience;
};
class master:public account, public admin{
    public:
    void create(string temp_name, int temp_code, double temp_pay, int temp_exp){
        name = temp_name;
        p_code = temp_code;
        pay = temp_pay;
        experience = temp_exp;
    }
    void update(double increment_pay=0, int add_exp=0){
        pay = pay + increment_pay;
        experience = experience + add_exp;
        if(increment_pay!=0 || add_exp!=0){
            cout<<"\nData has been updated successfully :)"<<endl;
        }
        else{
            cout<<"\nThere is no change in data"<<endl;
        }
    }
    void display(){
        cout<<"\nCode: "<<p_code;
        cout<<"\nName: "<<name;
        cout<<"\nPay: "<<pay<<" rupees";
        cout<<"\nExperience: "<<experience<<" years";
        cout<<endl;
    }
};

int main(){
    master m1;
    m1.create("Anup", 39, 49000, 0);
    m1.display();
    m1.update(23000, 2);
    m1.display();

    return 0;
}