#include <iostream>
using namespace std;
void printLeaders(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++) // time complexity : O(n^2)
        {
            if (arr[i] < arr[j])
                break;
        }
        if (j == n)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 3, 5, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}