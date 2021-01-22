#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void write_matrix_to_file(int** matrix, int n, int m, ofstream &file)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            file << matrix[i][j];
            file << " ";
        }
        file << endl;
    }
}

int main()
{
    int k, n, m;
    cout << "k=";
    cin >> k;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;

    string file_name;
    cout << "Enter filename(c.txt): " << endl;
    cin >> file_name;
    ifstream ifile;
    ifile.open(file_name);
    int*** matrix_arr = new int**[k];
    if (!ifile.is_open())
    {
        cout << "File not found." << endl;
    }
    while (!ifile.eof())
    {
        for (int z = 0; z < k; z++)
        {
            matrix_arr[z] = new int*[n];
            for (int i = 0; i < n; i++)
            {
                matrix_arr[z][n] = new int[m];
                for (int j = 0; j < m; j++)
                {
                    string br;
                    ifile >> matrix_arr[z][i][j];
                    ifile >> br;
                    cout << matrix_arr[z][i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    ifile.close();
    ofstream fin, fout;
    fin.open(file_name, ios::out);
    fout.open("out_"+file_name, ios::out);
    int sum = 0;

    for (int z = 0; z < k; z++)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += matrix_arr[z][i][j];
            }
        }
        if (sum > 0)
        {
            write_matrix_to_file(matrix_arr[z], n, m, fout);
        }
        else
        {
            write_matrix_to_file(matrix_arr[z], n, m, fin);
        }
    }


}
