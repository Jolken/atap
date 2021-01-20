#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int rows;
    int columns;
    setlocale(LC_ALL, "Russian");

    cout << "Количество рядков: ";
    cin >> rows;
    cout << "Количество колонок: ";
    cin >> columns;


    
    int** matrix1 = new int* [rows];
    cout << "Введите матрицу:\n";
    for (int i = 0; i < rows; i++) {
        matrix1[i] = new int[columns];
        for (int j = 0; j < columns; j++) {
            cin >> matrix1[i][j];
        }
    }


    int** matrix2 = new int* [rows];
    cout << "Введите матрицу:\n";
    for (int i = 0; i < rows; i++) {
        matrix2[i] = new int[columns];
        for (int j = 0; j < columns; j++) {
            cin >> matrix2[i][j];
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix1[i][j] += matrix2[i][j];
        }
    }

    int** matrixT = new int* [columns];
    for (int i = 0; i < columns; i++) {
        matrixT[i] = new int[rows];
        for (int j = 0; j < rows; j++) {
            matrixT[i][j] = matrix1[j][i];
        }
    }

    cout << "Получившиеся матрица: \n";
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrixT[i][j] << " ";
        }
        cout << endl;
    }
}