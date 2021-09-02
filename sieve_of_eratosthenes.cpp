//find all prime nos till n

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n + 1] = {0};

  for (int i = 2; i <= n; i++)
  {
    for (int j = i * i; j <= n; j += i)
    {
      a[j] = 1;
    }
  }

  for (int i = 2; i <= n; i++)
  {
    if (a[i] == 0)
    {
      cout << i << endl;
    }
  }
}

// Q2. Find prime factorization of a number

int main()
{
  int n;
  cin >> n;
  int a[n + 1] = {0};

  for (int i = 2; i <= n; i++)
  {
    a[i] = i;
  }

  for (int i = 2; i <= n; i++)
  {
    if (a[i] == i)
    {
      for (int j = i * i; j <= n; j += i)
      {
        if (a[j] == j)
        {
          a[j] = i;
        }
      }
    }
  }

  // cout << a[n] << " ";
  while (n != 1)
  {
    cout << a[n] << " ";
    n = n / a[n];
  }
}
