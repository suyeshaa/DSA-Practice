#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 0, j = i + 1;

        // for (int k = 0; k < n; k++)
        // {
        // }

        int diff = a[i] - a[j];
        int len = 1;
        int mx = 0;

        while (j < n)
        {
            int d = a[i] - a[j];
            if (d == diff)
            {
                // cout << d;
                i++;
                j++;
                len++;
            }
            else
            {
                // cout << len << " ";
                mx = max(len, mx);
                // cout << mx << endl;
                len = 1;
                diff = d;
            }
        }

        mx = max(len, mx);

        cout << mx << endl;
    }
}