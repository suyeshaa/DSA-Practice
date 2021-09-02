#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int q;
    cin >> q;
    int b[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }

    int arr[n][q] = {0};
    int k = 0, s = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < m; k++)
            {
                arr[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}