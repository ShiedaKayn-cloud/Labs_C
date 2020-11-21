#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

using namespace std;

int  **CreateMatrix(int n, int m) {
    int  **matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }
    return matrix;
}

void FreeMatrix(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void RandomNumbersMatrix(int **matrix, const int rows, const int columns)
{
    srand((unsigned int)time(0)); 

    for (int row = 0; row < rows; row++)
        for (int column = 0; column < columns; column++)
            matrix[row][column] = rand() % 100; 
}

void PrintMatrix(int  **matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int *MainDiagonalOfMatrix(int** matrix, const int rows, const int columns)
{
    int* result = new int[columns];

    for (int row = 0; row < rows; row++)
        result[row] = matrix[row][row];

    return result;
}

void PrintDiagonal(int* diagonal,int size) {
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << diagonal[i] <<" ";
    }
}

int* SortMatrix(int* diagonal, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (diagonal[j] > diagonal[j + 1]) {            
                temp = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = temp;
            }
        }
    }
    return diagonal;
}

int main() {
    int n = 5, m = 5;
    int** A = CreateMatrix(n, m);
    RandomNumbersMatrix(A, n, m);
    PrintMatrix(A, n, m);
    int* result = MainDiagonalOfMatrix(A, n, m);
    PrintDiagonal(result, n);
    result = SortMatrix(result, n);
    PrintDiagonal(result,n);
    FreeMatrix(A, n);

    delete[]result;

    return 0;
}