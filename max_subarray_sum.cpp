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

    int i = 0, j = 1;

    int sum = a[0];
    int mx = sum;

    while (true)
    {
        sum += a[j];
        mx = max(sum, mx);
        j++;

        if (j == n)
        {
            i++;
            j = i + 1;
            sum = a[i];
            mx = max(sum, mx);
        }

        if (i == n - 1)
        {
            cout << mx << endl;
            break;
        }
    }

    // cout << mx;
}