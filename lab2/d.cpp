#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");



	double x, 
		acc; // количество итераций

	cout << "Введите x: ";

	cin >> x;

	cout << "Введите точность(количество итераций): ";

	cin >> acc;

	double result = 0;
	double temp_x = x;
	double sqr_x = x*x;
	int del = 1;
	int multiplier = -1;
	for (int i = 1; i <= acc; i++)
	{
		multiplier *= -1;
		del += 2;
		temp_x = temp_x * sqr_x;
		result += temp_x / power;

	}


	cout << "Ответ: " << result;//calc(x, acc);
	




	return 0;
}