#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int studentMarks[15][5];
    int studentsWithoutTwo = 0;
    for (int j = 0; j < 2; j++)
    {
        cout << "Введите оценки " << j+1 << " студента: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> studentMarks[j][i];
            cout << " ";
        }
        cout << "\n";
        studentsWithoutTwo += 1;
    }

    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if(studentMarks[j][i] == 2)
            {
                studentsWithoutTwo--;
                break;
            }
        }
    }
    cout << "Количество студентов без оценки 2: " << studentsWithoutTwo;

    return 0;
}
