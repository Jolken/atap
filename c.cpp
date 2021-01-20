#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "n=";
    cin >> n;
    
    cout << "m=";
    cin >> m;
    
    int** A = new int*[m];
    int** C = new int*[m];
    cout << "Enter matrix: ";
    
    for (int i = 0; i < n; i++) {
        A[i] = new int[n];
        C[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
            C[i][j] = 0;
        }
    }
    
    int B;
    cout << "B=";
    cin >> B;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] > B) {
                C[i][j] = A[i][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
}
