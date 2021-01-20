#include <iostream>
using namespace std;

int** square_matrix(int** matrix, int n)
{
    int** result = new int*[n];

    for (int i = 0; i<n; i++) {
        result[i] = new int[n];
        for (int l = 0; l<n; l++) {
            int s = 0;
            for (int j = 0; j<n; j++) {
                s += matrix[i][j] * matrix[j][l];
            }
            result[i][l] = s;
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    int** matrix = new int*[n];

    cout << "Matrix:" << endl;
    for (int i = 0; i<n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j<n; j++) {
            cin >> matrix[i][j];
        }
    }

    int **result = square_matrix(matrix, n);

    cout << "result:" << endl;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}
