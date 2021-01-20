#include <iostream>

using namespace std;

int** sort_matr(int** matrix, int n, int m)
{
    for (int i = 0; i < m; i++)
    {

    }
}

int min(int* arr, n)
{
    int n = arr[0];
    for (int i = 0; i < n; i++)
    {
        n = n>arr[i] ? arr[i] : n;
    }
    return n;
}

int main()
{
    int n,m;
    cout << "n=";
    cin >> n;

    cout << "m=";
    cin >> m;
    int** matrix = new int*[n];

    cout << "Matrix:" << endl;
    for (int i = 0; i<n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }

    int **result = sort_matr(matrix, n, n);

    cout << "result:" << endl;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
