#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* ptr;

    node(){

    }
};

int main(){

    node n1;

    // n1.assign(5, &n2);
    // n1.display();

    return 0;
}

// void assign(int d, node* p){
//         data = d;
//         ptr = p;
//     }
//     void display(){
//         cout<<"Data = "<<data<<" Ptr = "<<ptr<<endl;
//     }