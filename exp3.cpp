#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m, int cm) {
        meters = m;
        centimeters = cm;
    }
    //another way to assign values to the variables
    // DM(int m, int cm) : meters(m), centimeters(cm) {}

    // Friend function to add DM and DB objects
    friend DM addDistance(DM d1, DB d2);

    void display() {
        cout << "Distance in meters and centimeters: " << meters << "m " << centimeters << "cm" << endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft, int in) {
        feet = ft;
        inches = in;
    }
    //another way to assign values
    //DB(int ft, int in) : feet(ft), inches(in) {}

    // Friend function to add DM and DB objects
    friend DM addDistance(DM d1, DB d2);

    void display() {
        cout << "Distance in feet and inches: " << feet << "ft " << inches << "in" << endl;
    }
};

// Friend function to add DM and DB objects
DM addDistance(DM d1, DB d2) {
    int totalMeters = d1.meters;
    int totalCentimeters = d1.centimeters;

    // Convert feet and inches to meters and centimeters
    totalMeters += d2.feet * 0.3048; // 1 foot = 0.3048 meters
    totalCentimeters += d2.inches * 2.54; // 1 inch = 2.54 centimeters

    // Adjust for overflow
    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters %= 100;
    }

    return DM(totalMeters, totalCentimeters);
}

int main() {
    DM distance1(5, 60); // 5 meters 60 centimeters
    DB distance2(3, 24); // 3 feet 24 inches

    DM sumDistance = addDistance(distance1, distance2);

    cout << "Sum of distances:" << endl;
    distance1.display();
    distance2.display();
    sumDistance.display();

    return 0;
}