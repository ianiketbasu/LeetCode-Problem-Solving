#include <iostream>
using namespace std;

int getOddOccurrence(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {2, 2, 3, 3, 2, 2, 4, 4,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    if (getOddOccurrence(arr, n))
        cout << getOddOccurrence(arr, n);

    else
        cout << "-1";

    return 0;
}