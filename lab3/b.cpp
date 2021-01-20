#include <iostream>

using namespace std;

int main() {
    int rows;
    int columns;
    setlocale(LC_ALL, "Russian");

    cout << "Количество рядков: ";
    cin >> rows;
    cout << "Количество колонок: ";
    cin >> columns;

    int** matrix = new int* [rows + 1];

    cout << "Введите матрицу:\n";
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    int* row = new int[columns];
    cout << "Введите рядок, который нужно вставить: ";
    for (int i = 0; i < columns; i++) {
        cin >> row[i];
    }

    int r;
    cout << "Введите номер рядка перед каким нужно вставить: ";
    cin >> r;


    for (int i = rows; i > r - 1; i--) {
        matrix[i] = matrix[i-1];
    }
    matrix[r - 1] = row;


    cout << "Получившиеся матрица: \n";
    for (int i = 0; i < rows + 1; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



}