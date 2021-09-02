#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a, b;
  cin >> a >> b;
  int rem = 0;

  while (b != 0)
  {
    rem = a % b;
    a = b;
    b = rem;
  }

  cout << a << endl;
}