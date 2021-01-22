#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    string file_name;
    cout << "Enter filename(a.bin): ";
    getline(cin, file_name);
    ifstream ifile;
    ifile.open(file_name, ios::in | ios::binary);
    if (!ifile)
    {
        cout << "No file found. Generating it." << endl;
        ofstream ofile;
        ofile.open(file_name, ios::out | ios::binary);
        for (int i = 0; i < 100; i++)
        {
            double num = (double)rand()/0.981615;
            ofile << num;
        }
        ifile.open(file_name, ios::in | ios::binary);
    }

    double nums[100];
    int i = 0;
    while (!ifile.eof())
    {
        double num;
        ifile >> num;
        cout << i+1 << ". " << num << endl;
        nums[i++] = num;
    }
    int selection;
    while (selection != -1)
    {
        cout << "Choose element or type -1 to close: ";
        cin >> selection;
        if (selection > 0 && selection < 100)
        {
            cout << nums[selection-1] << endl;
        }
    }



}
