#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int k, b, d;
    cout << "������� k, b, d: ";
    cin >> k;
    cin >> b;
    cin >> d;

    if ((k-b)%d == 0)
    {
        cout << "����� k �������� ������ �������������� ���������";
    }
    else
    {
        cout << "����� k �� �������� ������ �������������� ���������";
    }

    return 0;
}
