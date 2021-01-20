#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    
    int** matrix = new int*[n];
    cout << "Enter matrix: ";
    
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    bool ascending_main = true;
    bool descending_second = true;
    for (int i = 1; i < n; i++) {
        if (matrix[i-1][i-1] > matrix[i][i] ) {
            ascending_main = false;
            break;
        }
        
    }
    if (ascending_main) {
        for (int i = n-1; i > 0; i--) {
        if (matrix[i][n-i-1] < matrix[i-1][n-i-2] ) {
            descending_second = false;
            break;
        }
        
        }
    }
    
    if (ascending_main) {
        cout << "Главная диагональ возрастает\n";
        if (descending_second) {
            cout << "Побочная диагональ убывает";
        }
    }
    
    
    
}
