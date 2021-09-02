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

    int sum = 0, act_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            act_sum += sum;
            cout << sum << endl;
        }
        sum = 0;
    }

    cout << act_sum;
}