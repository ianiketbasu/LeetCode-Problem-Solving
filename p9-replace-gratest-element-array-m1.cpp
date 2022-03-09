// C++ Program to replace every element with the greatest
// element on right side
#include <bits/stdc++.h>
using namespace std;

/* Function to replace every element with the
next greatest element */
void nextGreatest(int arr[], int n)
{

    int max_from_right = arr[n - 1];
    arr[n - 1] = -1;
    for (int i = n-2; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = max_from_right;
        if (max_from_right < temp)
            max_from_right = temp;
    }
}

/* A utility Function that prints an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/* Driver program to test above function */
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreatest(arr, n);
    cout << "The modified array is: \n";
    printArray(arr, n);
    return (0);
}
