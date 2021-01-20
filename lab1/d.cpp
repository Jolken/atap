#include <iostream>
#include <cmath>
using namespace std;

double calc_distance(double x1, double y1, double x2, double y2) {
    double dx = (x2 - x1);
    double dy = (x2 - x1);
    return sqrt(dx * dx + dy * dy);
}

int main()
{ //А(0;3), В(-2;-3), С(-6;1) - пример равнобедренного треугольника
    setlocale(LC_ALL, "Russian"); //Кирилліца у консолі
    int arr_x[3];
    int arr_y[3];
    for (int i = 0; i < 3; i++) {
        cout << "x" << i + 1 << " = ";
        cin >> arr_x[0];
        cout << "y" << i + 1 << " = ";
        cin >> arr_y[0];
    }

    double d12 = calc_distance(arr_x[0], arr_y[0], arr_x[1], arr_y[1]), 
        d13 = calc_distance(arr_x[0], arr_y[0], arr_x[2], arr_y[2]),
        d23 = calc_distance(arr_x[1], arr_y[1], arr_x[2], arr_y[2]);

    if (d12 == d13 || d12 == d23 || d13 == d23) {
        cout << "Треугольник - равнобедренный";
    }
    else {
        cout << "Треугольник - не равнобедренный";
    }
    

}