#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian"); //Кирилліца у консолі
	double x, y, z;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;

	
	cout << "M = " << (z - (y / (y + x * x / 2))) * log(abs(abs(y) + sqrt(abs(x)))) << endl;
	//									4!										5!
	cout << "P = " << z - (pow(y, 4) / 1 / 2 / 3 / 4) + (pow(x, 5) / 1 / 2 / 3 / 4 / 5);

}