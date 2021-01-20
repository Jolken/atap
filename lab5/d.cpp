#include <iostream>

using namespace std;

int sum(int* arr, int n, int i)
{
    if (i < n-1)
    {
        return arr[i]+sum(arr,n,i+1);
    }
    else {
        return arr[i];
    }
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, n, 0);
}
