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

        int mx = 0, dy = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > mx)
            {
                mx = a[i];
                if (a[i + 1] < a[i])
                {
                    dy++;
                }
            }
        }

        cout << dy << endl;
    }
}