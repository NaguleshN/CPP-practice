#include <iostream>
using namespace std;

// Function to check if rows can be made unique by removing one column
int check(int** arr, int row, int col) {

    // Loop through each column to remove it
    for (int col = 0; col < cols; ++col) {
        bool uniqueRows = true;

        // Check if removing this column makes the rows unique
        for (int i = 0; i < rows; ++i) {
            for (int j = i + 1; j < rows; ++j) {
                bool identical = true;
                for (int k = 0; k < cols; ++k) {
                    if (k != col && matrix[i][k] != matrix[j][k]) {
                        identical = false; // If any value is different, rows are not identical
                        break;
                    }
                }
                if (identical) { // If two rows are identical, set uniqueRows to false
                    uniqueRows = false;
                    break;
                }
            }
            if (!uniqueRows) break; // Exit if rows are not unique
        }

        if (uniqueRows) {
            return 1; // If rows are unique after removing this column
        }
    }

    return 0; // If no column removal makes the rows unique
}

int main() {
    // Example binary matrix (3 rows, 3 columns)
     int row, col;
    cin >> row >> col;

    // Dynamically allocate a 2D array
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Input matrix elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the matrix (optional for debugging)
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

  // Check if rows can be made unique
    if (check(arr, row, col)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    // Free allocated memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}