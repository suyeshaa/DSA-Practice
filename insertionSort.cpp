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

    int k = 1;

    while (k < n)
    {
        for (int i = 0; i < k; i++)
        {
            if (a[k] < a[i])
            {
                int temp = a[i];
                a[i] = a[k];
                a[k] = temp;
            }
        }

        k++;
    }

    for (auto x : a)
    {
        cout << x << " ";
    }
}