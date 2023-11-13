#include <iostream>
using namespace std;

template <class T> //you can replace "class" -> "typename"

T findMin(T arr[], int size) {
    if (size <= 0) { //you can neglect this part but study about base cases
        cout << "Error: Array size must be greater than 0." << endl;
        return T(); // Return a default value for the type T
    }

    T minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    return minVal;
}

int main() {
    // Example with an array of integers
    int intArray[] = {5, 2, 8, 1, 6};
    int intMin = findMin(intArray, 5);
    cout << "Minimum value in the integer array: " << intMin << endl;

    // Example with an array of doubles
    double doubleArray[] = {3.14, 1.1, 2.2, 4.4};
    double doubleMin = findMin(doubleArray, 4);
    cout << "Minimum value in the double array: " << doubleMin << endl;

    // Example with an array of characters
    char charArray[] = {'z', 'b', 'a', 'c'};
    char charMin = findMin(charArray, 4);
    cout << "Minimum value in the char array: " << charMin << endl;

    return 0;
}
