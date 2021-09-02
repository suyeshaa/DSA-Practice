#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < nums.size();)
    {
        if (nums[i] == 0)
        {
            auto it = nums.begin() + i;
            nums.erase(it);
            nums.push_back(0);
        }
        i++;
    }

    for (int i = 0; i < nums.size();)
    {
        if (nums[i] == 0)
        {
            auto it = nums.begin() + i;
            nums.erase(it);
            nums.push_back(0);
        }
        i++;
    }

    for (auto x : nums)
    {
        cout << x;
    }
}