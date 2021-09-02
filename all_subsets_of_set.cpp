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

  // no of subsets = 2^n

  for (int i = 0; i < (1 << n); i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i & (i << j))
      {
        cout << a[j] << " ";
      }
    }

    cout << endl;
  }
}