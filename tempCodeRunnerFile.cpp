
#include <bits/stdc++.h>
using namespace std;

//sum of elements till n
int sum(int n)
{
  int sm = 0;
  if (n == 0)
  {
    return 0;
  }
  else
  {
    sm = sum(n - 1);
    return n + sm;
  }
}

//n raised to the power p
int power(int n, int p)
{
  int prevpow = 0;
  if (p == 0)
  {
    return 1;
  }
  else
  {
    prevpow = power(n, p - 1);
    return n * prevpow;
  }
}

//factorial of a number
int fact(int n)
{
  int temp = 0;

  if (n == 1)
  {
    return 1;
  }
  else
  {
    temp = fact(n - 1);