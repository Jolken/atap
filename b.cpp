#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "n=";
    cin >> n;
    
    cout << "m=";
    cin >> m;
    
    int** matrix = new int*[m];
    cout << "Enter matrix: ";
    
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    while(true) {
        int i;
        int j;
        cout << "i=";
        cin >> i;
    
        cout << "j=";
        cin >> j;
        
        if (i < 0 || j < 0) break;
        else if (i <= n && j <= m) {
            cout << matrix[i-1][j-1];
            cout << endl;
        }
    }
    
    
}
