#include<iostream>
using namespace std;

class DB;
class DM{
    int meters;
    int centimeters;

    public:
    void getMeters(int m, int c){
        meters = m;
        centimeters = c;
    }
    void displayMeters(){
        cout<<"Meters: "<<meters<<endl;
        cout<<"Centimeters: "<<centimeters<<endl;
    }
    friend DM sum(DM a, DB b);
};


class DB{
    int feets;
    int inches;

    public:
    void getFeets(int f, int i){
        feets = f;
        inches = i;
    }
    void displayFeets(){
        cout<<"Feets: "<<feets<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
    friend DM sum(DM a, DB b);
};

DM sum(DM a, DB b){

    DM total;
    total.meters = a.meters + (b.feets*0.3048);
    total.centimeters = a.centimeters + (b.inches*2.54);


    if(total.centimeters >= 100){
        total.meters = total.meters + total.centimeters/100;

        total.centimeters = total.centimeters%100;
    }
    return total;
}

int main(){

    DM satyam;
    satyam.getMeters(50, 160);

    DB sanjeev;
    sanjeev.getFeets(5, 3);

    DM temp = sum(satyam, sanjeev);

    temp.displayMeters();

    return 0;
}