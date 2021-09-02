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

    int i = 0;
    int j = n;

    while (i != j)
    {

        for (int i = 0; i < j - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }

        i = 0;
        j = j - 1;
    }

    for (auto x : a)
    {
        cout << x << " ";
    }
}