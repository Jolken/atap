#include <iostream>
#include <vector>
using namespace std;

struct Player
{
    string surname;
    int age;
    int games_count;
    int goals;
};

int main()
{
    int n;
    cout << "Players count = ";
    cin >> n;
    cout << "Enter players in below format:" << endl;
    cout << "Surname | Age | Games Count | Goals" << endl;
    cout << "0. Petrov 22 100 606" << endl;
    Player* players = new Player[n];
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". ";
        cin >> players[i].surname;
        cin >> players[i].age;
        cin >> players[i].games_count;
        cin >> players[i].goals;
    }

    for (int i = 1; i < n; i++)
    {
        string prev_surname = players[i-1].surname;
        string surname = players[i].surname;
        //cout << prev_surname << "  " << surname << "  " << (prev_surname > surname);
        if (prev_surname > surname)
        {
            cout <<  "Error, " << i+1 << " line is not ordered(" << prev_surname << ", " << surname << ")" << endl;
        }
    }



}
