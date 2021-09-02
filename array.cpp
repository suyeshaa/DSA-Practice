#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> pos;
    vector<int> neg;
    vector<int> zer;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            pos.push_back(a[i]);
        }
        else if (a[i] < 0)
        {
            neg.push_back(a[i]);
        }
        else
        {
            zer.push_back(a[i]);
        }
    }

    if (neg.size() % 2 == 0)
    {
        zer.push_back(neg[neg.size() - 1]);
        neg.pop_back();
    }

    if (pos.size() == 0)
    {
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for (auto x : neg)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << pos.size() << " ";
    for (auto x : pos)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << zer.size() << " ";
    for (auto x : zer)
    {
        cout << x << " ";
    }
}