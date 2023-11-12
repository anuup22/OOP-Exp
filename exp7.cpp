#include<iostream>
using namespace std;

/*  READ THIS
    1- The correct way to call the base class constructor is to use the member initializer list.
    2- the base class (Media) constructor is properly called using the member initializer list, 
       ensuring that the base class is initialized correctly before the derived class constructor body is executed.
*/

class Media{
    string title; //we are not gonna inherit these, that's why private else use protected
    double price;

    public:
    Media(string temp_title, double temp_price){
        title = temp_title;
        price = temp_price;
    }
    virtual void display(){
        cout<<"\nTitle: "<<title<<"\nPrice: "<<price<<" rupees"<<endl;
    }
};
class Book: public Media{
    int pageCount;

    public:
    /*
    Book(string temp_title, double temp_price, int temp_count){
        Media(temp_title, temp_price);    //study about passing parameters to base class constructor
        pageCount = temp_count;
    }
    */
    Book(string temp_title, double temp_price, int temp_count) : Media(temp_title, temp_price), pageCount(temp_count) {}

    void display(){   //override keyword is optional but better to use
        Media::display();       //calling function from Media class
        cout<<"Number of Pages: "<<pageCount<<endl;
    }
};
class VideoTape:public Media{
    int playTime; //in minutes

    public:
    /*
    VideoTape(string temp_title, double temp_price, int temp_time){
        playTime = temp_time;
        Media(temp_title, temp_price);
    }
    */
    VideoTape(string temp_title, double temp_price, int temp_time) : Media(temp_title, temp_price), playTime(temp_time) {}

    void display(){
        Media::display();
        cout<<"Playing Time: "<<playTime<<" minutes"<<endl;
    }
};

int main() {
    // Create objects of the derived classes
    Book book("The Art of not giving a F", 19.99, 250);
    VideoTape tape("Introduction to C++", 29.99, 120);

    // polymorphism to call the display function using pointer of base class type
    // virtual function is related with pointer of base class
    Media* mediaPtr1 = &book;
    Media* mediaPtr2 = &tape;

    mediaPtr1->display();
    cout << "---------------------------\n";
    mediaPtr2->display();

    return 0;
}
