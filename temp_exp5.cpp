#include<iostream>
using namespace std;

class Stud{
    int rollNo;
    string name;
    string dateOfBirth;

    public:
    Stud(){
        cout<<"Default constructor is called :)"<<endl;
    }

    Stud(int r, string n, string dob){
        rollNo = r;
        name = n;
        dateOfBirth = dob;
    }

    Stud(Stud& temp){
        rollNo = temp.rollNo;
        name = temp.name;
        dateOfBirth = temp.dateOfBirth;
    }

    ~Stud(){
        cout<<"Roll no: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"DOB: "<<dateOfBirth<<endl;
    }

};

int main(){
    
    cout<<"Object 1"<<endl<<endl;

    Stud satyam(39, "Satyam", "01/01/2023");

    cout<<"Object 2"<<endl<<endl;

    Stud sanjeev(satyam);

    return 0;
}