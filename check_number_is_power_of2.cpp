#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  // cout << (n & n - 1);
  if ((n & (n - 1)) == 0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO";
  }
}