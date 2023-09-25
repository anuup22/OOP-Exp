#include<iostream>
using namespace std;

class Student{
    string name;
    int roll;
    float cgpa;

    public:
    void setData(){
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter roll no.: ";
        cin>>roll;

        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }   
    void getData(){
        cout<<endl;
        cout<<"My name is "<<name<<endl;
        cout<<"My roll num is "<<roll<<endl;
        cout<<"My CGPA is "<<cgpa;
    }
};


int main(){
    Student s1;

    s1.setData();
    s1.getData();

    return 0;
}