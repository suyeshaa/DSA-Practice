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

    const int len = 100;
    int hash[100] = {-1};

    for (int i = 0; i < len; i++)
    {
        hash[i] = -1;
    }

    int min_idx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (hash[a[i]] != -1)
        {
            min_idx = min(min_idx, hash[a[i]]);
        }
        else
        {
            hash[a[i]] = i;
        }
    }

    cout << min_idx + 1;
}