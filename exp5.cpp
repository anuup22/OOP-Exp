#include <iostream>
using namespace std;

class Stud {
private:
    string name;
    int age;
    double gpa;

public:
    // Default constructor
    Stud() {
        name = "Unknown";
        age = 0;
        gpa = 0.0;
    }

    // Multiple constructors
    Stud(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
    }

    // Copy constructor
    Stud(Stud other) {
        name = other.name;
        age = other.age;
        gpa = other.gpa;
    }

    // Overloaded constructor
    Stud(string n) {
        name = n;
        age = 0;
        gpa = 0.0;
    }

    // Destructor
    ~Stud() {
        cout << "Destructor called for student: " << name << endl;
    }

    // Function to display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    // Using default constructor
    Stud student1;
    student1.display();

    // Using multiple constructors
    Stud student2("Anup", 20, 3.8);
    student2.display();

    // Using copy constructor
    Stud student3 = student2; // Copy constructor called
    student3.display();

    // Using overloaded constructor
    Stud student4("Sam");
    student4.display();

    return 0;
}
