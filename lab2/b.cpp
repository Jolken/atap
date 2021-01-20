#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int k, b, d;
    cout << "Введите k, b, d: ";
    cin >> k;
    cin >> b;
    cin >> d;

    if ((k-b)%d == 0)
    {
        cout << "Число k является членом арифметической прогресии";
    }
    else
    {
        cout << "Число k НЕ является членом арифметической прогресии";
    }

    return 0;
}
