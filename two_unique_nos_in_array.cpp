#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int xorsum = 0;

  for (int i = 0; i < n; i++)
  {
    xorsum = xorsum ^ a[i];
  }

  int tempxor = xorsum;
  int setbit = 0;
  int pos = 0;

  while (setbit != 1)
  {
    setbit = xorsum & 1;
    pos++;
    xorsum = xorsum >> 1;
  }

  int nwxor = 0;
  for (int i = 0; i < n; i++)
  {
    if ((a[i] & (1 << (pos - 1))))
    {
      nwxor = nwxor ^ a[i];
    }
  }

  cout << nwxor << endl;
  cout << (nwxor ^ tempxor);
}