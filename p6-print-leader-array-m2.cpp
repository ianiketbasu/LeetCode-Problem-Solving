#include <iostream>
using namespace std;
void printLeaders(int arr[], int n)
{
    int max_from_right = arr[n - 1];
    cout << max_from_right << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max_from_right)
        {
            max_from_right = arr[i];
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {18, 17, 5, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}