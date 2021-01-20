#include <iostream>
#include <cstdlib>
#include <chrono>
using namespace std;


char* copy(char* arr, int n)
{
    char* result = new char[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = arr[i];
    }
    return result;
}
double* copy(double* arr, int n)
{
    double* result = new double[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = arr[i];
    }
    return result;
}
void Merge(double* arr,int p, int q,int r)
{

    int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    double* L = new double[n1];
    double* R = new double[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[q+j+1];
    }
    i=0,j=0;
    for(k=p;i<n1&&j<n2;k++)
    {
        if(L[i]<R[j])
        {
            arr[k]=L[i++];
        }
        else
        {
            arr[k]=R[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}
void MergeSort(double* arr,int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MergeSort(arr,p,q);
        MergeSort(arr,q+1,r);
        Merge(arr,p,q,r);
    }
}
void Merge(char* arr,int p, int q,int r)
{

    int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    char* L = new char[n1];
    char* R = new char[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[q+j+1];
    }
    i=0,j=0;
    for(k=p;i<n1&&j<n2;k++)
    {
        if(L[i]<R[j])
        {
            arr[k]=L[i++];
        }
        else
        {
            arr[k]=R[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}
void MergeSort(char* arr,int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MergeSort(arr,p,q);
        MergeSort(arr,q+1,r);
        Merge(arr,p,q,r);
    }
}

void insert_sort(double* arr, int n)
{
    double key;
    int i, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void insert_sort(char* arr, int n)
{
    char key;
    int i, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void fill_data(char* arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        arr[i] = 'A' + rand()%24;
    }
}
void fill_data(double* arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        arr[i] = rand()/0.98789;
    }
}
int main()
{
    srand(time(NULL));
    char* data_char_1 = new char[100];
    char* data_char_2 = new char[1000000];
    double* data_double_1 = new double[100];
    double* data_double_2 = new double[1000000];
    fill_data(data_char_1, 100);
    fill_data(data_char_2, 1000000);
    fill_data(data_double_1, 100);
    fill_data(data_double_2, 1000000);

    for (int i = 0; i < 5; i++)
    {
        cout << "~~~~~~~~~TEST " << i+1 << "~~~~~~~~~" << endl;
        auto start = chrono::high_resolution_clock::now();
        insert_sort(copy(data_char_1, 100), 100);
        auto end = chrono::high_resolution_clock::now();
        double time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by insert sort CHAR on 100 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

        start = chrono::high_resolution_clock::now();
        insert_sort(copy(data_double_1, 100), 100);
        end = chrono::high_resolution_clock::now();
        time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by insert sort DOUBLE on 100 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

        start = chrono::high_resolution_clock::now();
        insert_sort(copy(data_char_2, 1000000), 1000000);
        end = chrono::high_resolution_clock::now();
        time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by insert sort CHAR on 1000000 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

        start = chrono::high_resolution_clock::now();
        insert_sort(copy(data_double_2, 1000000), 1000000);
        end = chrono::high_resolution_clock::now();
        time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by insert sort DOUBLE on 1000000 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

        start = chrono::high_resolution_clock::now();
        MergeSort(copy(data_char_1, 100), 0, 100);
        end = chrono::high_resolution_clock::now();
        time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by merge sort CHAR on 100 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

        start = chrono::high_resolution_clock::now();
        MergeSort(copy(data_double_1, 100), 0, 100);
        end = chrono::high_resolution_clock::now();
        time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by merge sort DOUBLE on 100 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

        start = chrono::high_resolution_clock::now();
        MergeSort(copy(data_char_2, 1000000), 0, 1000000);
        end = chrono::high_resolution_clock::now();
        time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by merge sort CHAR on 1000000 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

        start = chrono::high_resolution_clock::now();
        MergeSort(copy(data_double_2, 1000000), 0, 1000000);
        end = chrono::high_resolution_clock::now();
        time_taken =
          chrono::duration_cast<chrono::nanoseconds>(end - start).count();
          time_taken *= 1e-9;
        cout << "Time taken by merge sort DOUBLE on 1000000 elements " << fixed
             << time_taken;
        cout << " sec" << endl;

    }
}
