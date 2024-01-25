#include<iostream>
using namespace std;

void inputMatrix(int** ptr, int m, int n)
{
    cout << "Enter the elements of the matrix: "<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the [" << i << "][" << j << "] : ";
            cin >> ptr[i][j];
        }
        cout << endl;
    }
}

void displayMatrix(int** ptr, int m, int n)
{
    cout << "matrix Elements: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
}

int sumofelements(int** ptr, int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += ptr[i][j];
        }
    }
    return sum;
}

void displayrowSum(int** ptr, int m, int n) {
    int* arr = new int[m]();
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            arr[i] += ptr[i][j];
        }
        cout << "Sum of row " << i << ": " << arr[i] << endl;
    }
    delete[] arr;
}

void displaycolsom(int** ptr, int m, int n) {
    int* colSum = new int[n]();
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            colSum[j] += ptr[i][j];
        }
        cout << "sum of column " << j << ": " << colSum[j] << endl;
    }
    delete[] colSum;
}

void transposematrix(int** ptr, int m, int n) {
    cout << "Transpose : ";
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
}



int main() {
    int m, n;

    cout << "Enter the number of rows: ";
    cin >> m;

    cout << "Enter the number of columns: ";
    cin >> n;

    int** ptr = new int* [m];

    for (int i = 0; i < m; i++) {
        ptr[i] = new int[n];
    }

    int choice;
    do {
        cout << "Menu:";
        cout << "1. Input Matrix" << endl;
        cout << "2. Display Matrix" << endl;
        cout << "3. Sum of all elements" << endl;
        cout << "4. Display Row-wise Sum" << endl;
        cout << "5. Display Column-wise Sum" << endl;
        cout << "6. Transpose Matrix" << endl;
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(ptr, m, n);
            break;
        case 2:
            displayMatrix(ptr, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumofelements(ptr, m, n) << endl;
            break;
        case 4:
            displayrowSum(ptr, m, n);
            break;
        case 5:
            displaycolsom(ptr, m, n);
            break;
        case 6:
            transposematrix(ptr, m, n);
            break;
        case 0:
            cout << "Exiting ";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != 0);

    //deallocate memory
    for (int i = 0; i < m; i++) 
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}
