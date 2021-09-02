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

        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += a[i] * a[i];
            }
            else
            {
                sum -= a[i] * a[i];
            }
        }

        cout << sum << endl;
    }
    return 0;
}
