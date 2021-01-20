#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string fun(string str)
{
    string result;
    int length = str.length();
    char last_char;
    int char_count = 1;
    int start_i = 0, i = 0;
    for (i = 0; i < length; i++)
    {
        if (isdigit(str[i]))
        {
            start_i++;
            continue;
        }
        else if(start_i == i)
        {
            last_char = str[i];
        }
        else if (str[i] == last_char)
        {
            char_count++;
        }
        else if (str[i] != last_char)
        {
            if (char_count <= 2)
            {
                for (int k = 0; k < char_count; k++)
                {
                    result += last_char;
                }
            }
            else
            {
                result += last_char;
                result += to_string(char_count);
            }
            last_char = str[i];
            char_count = 1;
        }

        if (i == length-1)
        {
            if (char_count <= 2)
            {
                for (int k = 0; k < char_count; k++)
                {
                    result += last_char;
                }
            }
            else
            {
                result += last_char;
                result += to_string(char_count);
            }
        }

    }

    return result;
}

int main()
{
    string str;
    cout << "Enter string:";
    getline(cin, str);
    string result = fun(str);

    cout << result;

}
