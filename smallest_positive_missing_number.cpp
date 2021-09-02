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

    int hash[1000] = {0};

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            hash[a[i]]++;
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        if (hash[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
}