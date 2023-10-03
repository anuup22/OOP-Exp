#include<iostream>
using namespace std;

double area(int rad){
    double temp = 3.14*rad*rad;
    return temp;
}

double area(int b, int h){
    double temp = 0.5*b*h;
    return temp;
}

int main(){

    //for circle
    double radius;
    cout<<"Enter radius for circle: ";
    cin>>radius;

    int base;
    int height;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;

    cout<<area(radius)<<endl;
    cout<<area(base, height)<<endl;


    return 0;
}
