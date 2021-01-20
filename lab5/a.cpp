#include <iostream>
#include <cmath>
using namespace std;

double f(double a, double b)
{
    return pow(tan(a),2) + ((4*a*a+3)/
                           (sqrt(a-b)));
}

int main()
{
    double x = 0, y = 0;
    while (x == y)
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
    }
    cout << f(((x+y)/(x-y))
              ,
              (x-y)/(x+y));
}
