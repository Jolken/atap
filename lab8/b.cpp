#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    string text;
    ifstream ifile;
    ifile.open("b.txt");
    if (!ifile)
    {
        cout << "File b.txt not found." << endl;
    }
    while (!ifile.eof())
    {
        string line;
        getline(ifile, line);
        text += line;
    }
    int sentence_start = 0;
    int len = text.length();
    int sentence_end;
    bool has_brackets = false;
    for (int i = 0; i < len; i++)
    {
        if (text[i] == '(' || text[i] == ')')
        {
            has_brackets = true;
        }
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence_end = i;
            if (has_brackets)
            {
                cout << text.substr(sentence_start, sentence_end-sentence_start+1) << endl;
            }
            sentence_start = i+1 > len-1 ? len-1 : i+1;
            has_brackets = false;
        }
        if (i == len-1)
        {
                        if (has_brackets)
            {
                cout << text.substr(sentence_start, sentence_end-sentence_start) << endl;
            }
        }
    }



}
