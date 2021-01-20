#include <iostream>

using namespace std;

/* INPUT
2
5
1 5 4 2 3
1 5 4 2 3
*/
int min(int** matrix, int n, int column)
{
    int result = matrix[0][column];
    for (int i = 0; i < n; i++)
    {
        result = matrix[i][column] > result ? result : matrix[i][column];
    }
    return result;
}
void swap_column(int** matrix, int n, int c1, int c2)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = matrix[i][c1];
        matrix[i][c1] = matrix[i][c2];
        matrix[i][c2] = tmp;
    }
}
int** sort_matr(int** matrix, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            //cout << min(matrix, n, i) << "   " << min (matrix, n, j) << endl;
            if (min(matrix, n, i) > min(matrix, n, j))
            {
                swap_column(matrix, n, i, j);

            }
        }
    }
    return matrix;
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

    int **result = sort_matr(matrix, n, m);

    cout << "result:" << endl;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
