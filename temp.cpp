#include<iostream>
using namespace std;

class student{
    public:

    string name;
    int roll;

    student(){
        cout<<"Constructor is called"<<endl;
    }
    student(string n, int r){
        name = n;
        roll = r;
    }

    ~student(){
        cout<<name<<endl;
        cout<<roll<<endl;
    }
};


int main(){
    
    student stu1("Yash", 30); 

    return 0;
}