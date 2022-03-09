#include <bits/stdc++.h>
using namespace std;

int minDist(int arr[], int n, int x, int y)
{
    int minDist = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((x == arr[i] && y == arr[i] ||x == arr[j] && y == arr[i]) && minDist > abs(i - j))
                    minDist=abs(i-j);
        }
    }
    return minDist;
}
int main()
{
    int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int y = 6;

    cout << "Minimum distance between " << x << " and " << y << " is " << minDist(arr, n, x, y) << endl;
    return 0;
}