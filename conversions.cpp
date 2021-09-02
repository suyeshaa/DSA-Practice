#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int d = n % 10;
        ans += d * x;
        x *= 2;
        n = n / 10;
    }
}

int octalDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int d = n % 10;
        ans += d * x;
        x *= 8;
        n = n / 10;
    }
}

int hexadecimalDecimal(string n)
{
    int ans = 0;
    int x = 1;

    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] >= '0' and n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' and n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }

        x *= 16;
    }

    return ans;
}

int decimalBinary(int n)
{
    int ans = 0;
    int x = 1;

    vector<int> v;

    while (n > 0)
    {
        v.push_back(n % 2);
        n = n / 2;
    }
}

string hexadecimalBinary(int n)
{
    string ans = 0;
    int x = 1;

    while (x <= n)
    {
        x *= 16;
    }
    x = x / 16;

    while (n > 0)
    {
        int lastDig = n / x;
        n = n - lastDig * x;
        x = x / 16;

        if (lastDig <= 9)
        {
            ans = ans + to_string(lastDig);
        }
        else
        {
            char c = 'A' + lastDig - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << BinaryToDecimal(n) << " " << hexadecimalDecimal(s) << endl;
}