#include <iostream>
using namespace std;

//Please read about member initializer function
//you can show the usage of new and delete keyword without the class also

class Sample {
private:
    int data;

public:
    // Constructor
    Sample(int value) : data(value) {                           //member initializer function
        //data = value;
        cout << "Object created with data = " << data <<endl;
    }

    // Member function to display data using this pointer
    void displayData() {
        cout << "Data using this pointer: " << this->data << endl;
    }

    // Dynamic memory allocation using new
    int* allocateMemory() {
        int* dynamicData = new int; // Allocate memory for an integer
        *dynamicData = 42;          // Assign a value to the allocated memory
        // int* dynamicData = new int(42) -> another method
        return dynamicData;
    }

    // Dynamic memory deallocation using delete
    void deallocateMemory(int* dynamicData) {
        delete dynamicData; // Deallocate the memory
    }

    // Destructor
    ~Sample() {
        cout << "Object with data = " << data << " is destroyed." << endl;
    }
};

int main() {
    // Create an object on the stack
    Sample obj1(10);

    // Use this pointer to access member function
    obj1.displayData();

    // Dynamic memory allocation and deallocation
    int* dynamicData = obj1.allocateMemory();
    cout << "Dynamic Data: " << *dynamicData << endl;

    obj1.deallocateMemory(dynamicData);

    return 0;
}
