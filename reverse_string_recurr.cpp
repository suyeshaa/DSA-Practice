#include <bits/stdc++.h>
using namespace std;

void rev(string str, int i)
{
  if (i == str.length())
  {
    return;
  }
  rev(str, i + 1);
  cout << str[i];
}

void rev2(string str)
{
  if (str.length() == 0)
  {
    return;
  }

  string rest = str.substr(1);
  rev2(rest);
  cout << str[0];
}

int main()
{
  string s;
  cin >> s;

  rev(s, 0);
}