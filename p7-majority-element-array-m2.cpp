
#include <iostream>
using namespace std;

void printMajorityElement(int arr[], int n)
{
    int index = 0, maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxcount)
        {
            maxcount = count;
            index = i;
        }
    }

    if (maxcount > n / 2)
    {
        cout << arr[index];
    }
    else
        cout << "-1";
}




int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printMajorityElement(arr, n);

    return 0;
}

























































