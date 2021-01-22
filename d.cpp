#include <iostream>
#include <string>
using namespace std;
int StrToInt(string s,bool sign){
 int ss = 0, i = 0;
 while ((int)(s[i]) > 47 && (int)(s[i]) < 58)
 {
  ss = ss + (s[i] & 0x0F);
  ss = ss * 10;
  i++;
 }
 ss = ss / 10;
 if (sign == true)
  ss = -ss;
 return(ss);
}
int shis(int &i,string s) {
 bool sign = false;
 string s1;
 if (s[i] == '-') {
  sign = true;
  i++;
 }
 while ((int)(s[i]) > 47 && (int)(s[i]) < 58) {
  s1.push_back(s[i]);
  i++;
 }
 return StrToInt(s1, sign);
}
int main() {
 string agr, inequality;
 cout « "Do you want to check inequality(y/n)? ";
 cin » agr;
 int len, num_start, num_end;
 string comparsion_operator;
 int num1, num2;
 bool is_num_reading = true;
 num_start = 0;
 while (agr == "y" || agr == "Y") {
      cout « "Enter inequality:\n";
      getline(cin, inequality);
      len = inequality.length();
      for (int i = 0; i < len; i++)
      {
          if (is_num_reading)
          {
              if (inequality[i] == '>' || inequality[i] == '<')
              {
                  is_num_reading = false;
                  comparsion_operator += inequality[i];
              }
          }
          if (!is_num_reading)
          {
              if (inequality[i] == '=')
              {
                  comparsion_operator += inequality[i];
              }
              is_num_reading = false;
          }
      }
      cout « endl « "Do you want to check inequality(y/n) again? ";
      cin » agr;
 }
 return 0;
}
