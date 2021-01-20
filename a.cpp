#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    
    int* arr = new int[n];
    cout << "Enter array: ";
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    bool descending = false;
    for (int i = 1; i < n; i++) {
        if (arr[i-1] > arr[i])
        {
            if (!descending) {
                descending = true;
                cout << i << " ";
            }
            cout << i+1 << " ";
        }
        else {
            descending = false;
        }
    }
    
    
}
