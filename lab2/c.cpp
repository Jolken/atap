#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num) {
    vector<int> nums;
    int i = 0;
    while (num > 10)
    {
        nums[i] = num % 10;
        num = num / 10;
    }
    for(i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }


    return false;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    isPalindrome(1001);


    int numStart, numEnd;

    cout << "Введите начало и конец интервала: ";

    cin >> numStart;
    cin >> numEnd;

    cout << "Палиндромы: ";
    for (numStart; numStart <= numEnd; numStart++)
    {
        if (isPalindrome(numStart))
        {
            cout << numStart << " ";
        }
    }




    return 0;
}
