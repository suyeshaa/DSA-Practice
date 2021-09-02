#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 1;
    if (a[0] == s)
    {
        cout << 0 << " " << 0 << endl;
    }

    int sum = a[i];

    while (j < n and i < n)
    {
        sum += a[j];
        if (sum > s)
        {
            sum = sum - a[i];
            i++;
        }
        else if (sum != s)
        {
            j++;
        }
        if (sum == s)
        {
            cout << i + 1 << " " << j + 1 << endl;
            break;
        }
    }
}