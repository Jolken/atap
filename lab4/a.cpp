#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string str;
    char c;

    cout << "Введите строку:" << endl;
    getline(cin, str);
    cout << "Введите символ: ";
    cin >> c;

    bool needToPrint = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 32) {
            if (needToPrint) cout << endl;
            needToPrint = false;
        }
        else if (str[i] == c) {
            if (!i || str[i - 1] == 32) {
                needToPrint = true;
            }
        }
        if (needToPrint) {
            cout << str[i];
        }
    }



}