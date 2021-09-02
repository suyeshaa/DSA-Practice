// Q1. find all numbers till a that are divisible by b or c

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int c1 = a / b;
  int c2 = a / c;
  int c3 = a / (b * c);

  cout << c1 + c2 - c3;
}

// Q2. find gcd of a and b using euclid algo

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