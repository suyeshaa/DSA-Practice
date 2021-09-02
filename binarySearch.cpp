#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int key, int len)
{
    int s = 0;
    int e = len - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6};
    int key = 5;
    int len = 5;

    cout << binary(arr, key, len);
}