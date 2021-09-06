#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int num, int i)
{

  if (i == n)
  {
    return -1;
  }

  if (arr[i] == num)
  {
    return i;
  }
  first(arr, n, num, i + 1);
}

int last(int arr[], int n, int num, int i)
{

  if (i == n)
  {
    return -1;
  }

  int restArr = last(arr, n, num, i + 1);
  if (restArr != -1)
  {
    return restArr;
  }

  if (arr[i] == num)
  {
    return i;
  }

  return -1;
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

  cout << first(a, n, 2, 0) << endl;
  cout << last(a, n, 2, 0);
}