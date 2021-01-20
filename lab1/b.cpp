#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian"); //Кирилліца у консолі
    double a;
    cout << "a = ";
    cin >> a;
    //      a^2
    double a2 = a * a;//1 операція множення
    //      a^4
    double a4 = a2 * a2;//2 операція множення
    cout << "a^4 = " << a4 << endl;
    //    a^12
    double a12 = a4 * a4 * a4;//3,4 операція множення
    cout << "a^12 = " << a12 << endl;
    double a26 = a12 * a12 * a2;//5,6 операція множення
    cout << "a^26 = " << a26 << endl;


}