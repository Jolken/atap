#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian"); //Кирилліца у консолі
    int a;
    cout << "a = ";
    cin >> a;
    if (a / 100 > 0 && a/1000 == 0) {
        cout << a << " - трьохзначне";
    }
    else {
        cout << a << " - не трьохзначне";
    }
}