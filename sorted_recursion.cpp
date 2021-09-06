#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
  if (n == 1)
  {
    return true;
  }
  bool prevarr = isSorted(arr + 1, n - 1);
  if (arr[0] < arr[1] && prevarr)
  {
    return true;
  }
  return false;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cout << isSorted(a, n);
}