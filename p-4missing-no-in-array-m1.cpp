#include <iostream>
using namespace std;

int getMissingNo(int arr[], int n)
{
    int sum = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        sum = sum - arr[i];

    return sum;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8};
    cout << "missing no is : " << getMissingNo(arr, 7);
    return 0;
}