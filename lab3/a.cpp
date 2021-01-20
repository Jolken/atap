#include <iostream>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int n;

	cout << "Введите количество элементов в массиве: ";
	cin >> n;
	
	double* arr = new double[n];


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int counter = 0;

	if (n > 1) {
		//проверяем крайние эдементы
		if (arr[0] > arr[1]) {
			counter++;
		}
		if (arr[n - 1] > arr[n - 2]) {
			counter++;
		}

		for (int i = 1; i < n - 1; i++) {
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
				counter++;
			}
		}

	}
	else
	{
		counter++;
	}

	cout << "Ответ: " << counter;


	return 0;
}