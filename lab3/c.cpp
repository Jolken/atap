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

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rand();
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int min = matrix[1][1];
    int new_rows_count = rows;
    for (int i = 0; i < (rows < columns ? rows : columns); i++) {
        if (min > matrix[i][i]) {
            min = matrix[i][i];
            new_rows_count = rows-1;
        }
        else if (min == matrix[i][i]) {
            new_rows_count -= 1;
        }
    }


    for (int i = 0; i < rows; i++) {
        if (matrix[i][i] == min) {
            delete matrix[i];
            matrix[i] = nullptr;
        }
    }

    for (int i = 0; i < rows; i++) {
        if (matrix[i] == nullptr) {
            for (int j = i; j < rows-1; j++) {
                matrix[j] = matrix[j + 1];
            }
        }
    }

    cout << "Получившиеся матрица: \n";
    for (int i = 0; i < new_rows_count; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}