#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int j = 0;

    // for (int i = 0; i < n; i++)
    // {
    // }

    int i = 0;

    while (i <= n - 2)
    {
        if (i != j)
        {
            swap(a[i][j], a[j][i]);
        }
        j++;

        if (j == n)
        {
            i++;
            j = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}