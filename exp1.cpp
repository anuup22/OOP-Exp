#include<iostream>
using namespace std;

#define pi 3.14159265

double area(float base, float height){
    //area of triangle = 1/2 * base * height
    return 0.5*base*height;
}

double area(float radius){
    //area of circle = 3.1415 * radius * radius
    return pi*radius*radius;
}

int main(){
    int option;
    cout<<"For area of Triangle: press 1 ->"<<endl;
    cout<<"For area of Circle: press 2 ->"<<endl;

    cin>>option;
    if(option == 1){
        float temp_base;
        float temp_height;

        cout<<"Please enter value for Base: ";
        cin>>temp_base;

        cout<<"Please enter value for Height: ";
        cin>>temp_height;

        cout<<"Area of Triangle = "<<area(temp_base,temp_height)<<" square cm/m"<<endl;
        cout<<"Thank you :)"<<endl;
    }
    else if(option == 2){
        float temp_radius;

        cout<<"Please enter value for Radius: ";
        cin>>temp_radius;

        cout<<"Area of Circle = "<<area(temp_radius)<<" square cm/m"<<endl;
        cout<<"Thank you :)"<<endl;
    }
    else{
        cout<<"Invailid Input :("<<endl;
        cout<<"Please run the code again and enter correct input data"<<endl;
        cout<<"Thank you :)"<<endl;
    } 
    return 0;
}