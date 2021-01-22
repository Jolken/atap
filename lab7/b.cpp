#include <iostream>
#include <map>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    bool operator <(const Date& a) const
    {
        return
        (
         (a.year < year)
         ||
         (a.year == year && a.month < month)
         ||
         (a.year == year && a.month == month && a.day < day)
         );
    }
    string tostring()
    {
        string result;
        if (day < 10)
        {
            result += '0';
        }
        result += to_string(day);
        result += '-';
        if (month < 10)
        {
            result += '0';
        }
        result += to_string(month);
        result += '-';
        result += to_string(year);
        return result;
    }

};
enum carType {hatchback = 'H', universal = 'U', sedan = 'S'};
struct Car
{
    string model;
    string manufacturer;
    carType type;
    int year;
    Date registrationDate;
    string FIO;
};
/* INPUT
5
Kalina Lada S 2008 11-12-2020 Kulikov Valerii Maksimovich
Benz Mercedes H 2015 05-10-2019 Grigorenko Alexey Andreevich
Kalina Lada S 2008 11-12-2020 Sergeev Alexey Victorovich
Kalina Lada H 2008 11-01-2021 Kaleno Georgiy Valerievich
Car BMW U 1999 01-12-2020 Kulikov Valerii Maksimovich
*/
void print_car(Car car)
{
    cout << car.model << " | " << car.manufacturer << " | " << (char)car.type << " | " << car.year << " | "
    << car.registrationDate.tostring() << " | " << car.FIO << endl;
}
void print_stats(map<string, int> stats)
{
    cout << "~~~~~~Stats~~~~~~" << endl;
    for ( const auto &p : stats ) {
        cout << p.first << " - " << p.second << "\n";
    }
}

Date str_to_date(string str)
{
    Date date = Date();
    date.day = stoi(str.substr(0,2));
    date.month = stoi(str.substr(3,2));
    date.year = stoi(str.substr(6,4));
    return date;
}


void sort_cars_by_reg_date(Car* cars, int n)
{
    Car tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (cars[i].registrationDate < cars[j].registrationDate)
            {
                tmp = cars[i];
                cars[i] = cars[j];
                cars[j] = tmp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Cars count = ";
    cin >> n;
    cout << "Enter players in below format:" << endl;
    cout << "Model | Manufacturer | Type(H-hatchback, U-universal, S-sedan | Year | Registration Date | FIO" << endl;
    cout << "0. Kalina Lada S 2008 11-12-2020 Kulikov Valerii Maksimovich" << endl;
    Car* cars = new Car[n];
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". ";
        cin >> cars[i].model;
        cin >> cars[i].manufacturer;
        char type;
        cin >> type;
        switch (tolower(type))
        {
            case 'h':
                cars[i].type = hatchback;
                break;
            case 'u':
                cars[i].type = universal;
                break;
            case 's':
                cars[i].type = sedan;
                break;
        }

        cin >> cars[i].year;
        string reg_date;
        cin >> reg_date;
        cars[i].registrationDate = str_to_date(reg_date);
        string F, I, O;
        cin >> F >> I >> O;
        cars[i].FIO = F + " " + I + " " + O;
    }

    sort_cars_by_reg_date(cars, n);

    for (int i = 0; i < n; i++)
    {
        print_car(cars[i]);
    }



}
