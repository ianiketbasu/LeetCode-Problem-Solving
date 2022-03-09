#include <bits/stdc++.h>
using namespace std;

int minDist(int arr[], int n, int x, int y)
{
    int i, prev, min_dis = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x || arr[i] == y)
            prev = i;
        break;
    }
    for (i = prev + 1; i < n; i++)
    {
        if (arr[i] == x || arr[i] == y)
        {
            if (arr[i] != arr[prev] && (i - prev) < min_dis)
            {
                min_dis = i - prev;
                prev = i;
            }
            else
                prev = i;
        }
    }
    return min_dis;
}

int main()
{
    int arr[] = {3, 5, 4, 2, 3, 5, 3, 6, 3, 6, 5, 4, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int y = 6;

    cout << "Minimum distance between " << x << " and " << y << " is " << minDist(arr, n, x, y) << endl;
    return 0;
}