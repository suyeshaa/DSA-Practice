#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 45, 23, 51, 19, 8};

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (auto x : arr)
    {
        cout << x << " ";
    }
}