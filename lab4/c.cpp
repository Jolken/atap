#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string str;
    cout << "Введите строку:" << endl;
    getline(cin, str);
    char c;
    cout << "Введите символ: ";
    cin >> c;

    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ',') {
            for (int j = 0; j < i; j++) {
                if (str[j] == c) {
                    count += 1;
                }
            }
            break;
        }
    }

    cout << "Количество указанных символов перед запятой: " << count;



}