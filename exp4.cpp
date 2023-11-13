#include <iostream>
#include <vector>
using namespace std;

class MAT {
private:
    int m; // Number of rows
    int n; // Number of columns
    vector<vector<double>> matrix; // 2D vector to store the matrix elements

public:
    //ructor to initialize the matrix with given dimensions (read about member initializer function)
    MAT(int rows, int columns) : m(rows), n(columns), matrix(rows, vector<double>(columns, 0.0)) {}

    // Function to input values into the matrix
    void inputMatrix() {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Function to add two matrices
    MAT add(MAT other) {
        if (m != other.m || n != other.n) {
            cout << "Error: Matrices must have the same dimensions for addition." << endl;
            return MAT(0, 0); // Return an empty matrix
        }

        MAT result(m, n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }

        return result;
    }

    // Function to multiply two matrices
    MAT multiply(MAT other) {
        if (n != other.m) {
            cout << "Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication." << endl;
            return MAT(0, 0); // Return an empty matrix
        }

        MAT result(m, other.n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < other.n; ++j) {
                for (int k = 0; k < n; ++k) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    // Example usage of the MAT class
    int m, n;
    cout << "Enter the number of rows for the first matrix: ";
    cin >> m;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> n;

    MAT mat1(m, n);
    mat1.inputMatrix();

    cout << "Enter the number of rows for the second matrix: ";
    cin >> m;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> n;

    MAT mat2(m, n);
    mat2.inputMatrix();

    // Display the input matrices
    mat1.displayMatrix();
    mat2.displayMatrix();

    // Perform matrix addition
    MAT additionResult = mat1.add(mat2);
    additionResult.displayMatrix();

    // Perform matrix multiplication
    MAT multiplicationResult = mat1.multiply(mat2);
    multiplicationResult.displayMatrix();

    return 0;
}
