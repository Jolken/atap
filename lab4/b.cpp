#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string str;
    //https://ru.wikipedia.org/wiki/%D0%9F%D1%83%D0%BD%D0%BA%D1%82%D1%83%D0%B0%D1%86%D0%B8%D1%8F#:~:text=%D0%92%20%D0%BD%D0%B5%D0%B9%20%D1%83%D0%BF%D0%BE%D1%82%D1%80%D0%B5%D0%B1%D0%BB%D1%8F%D1%8E%D1%82%D1%81%D1%8F%20%D1%81%D0%BB%D0%B5%D0%B4%D1%83%D1%8E%D1%89%D0%B8%D0%B5%20%D0%B7%D0%BD%D0%B0%D0%BA%D0%B8,%2C%20%D1%82%D0%B8%D1%80%D0%B5%2C%20%D1%81%D0%BA%D0%BE%D0%B1%D0%BA%D0%B8%2C%20%D0%BA%D0%B0%D0%B2%D1%8B%D1%87%D0%BA%D0%B8.
    char chars[] = {',','.',';','!','?',':','-','"','(',')'};

    cout << "Введите строку:" << endl;
    getline(cin, str);

    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < (sizeof(chars) / sizeof(*chars)); j++) {
            if (str[i] == chars[j]) {
                count+=1;
            }
        }
    }

    cout << "Количество знаков пунктуации: " << count;



}