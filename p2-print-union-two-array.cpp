#include <iostream>
using namespace std;

void printUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else
        {
            cout << arr1[i++] << " ";
            j++;
        }
    }
    while (i < n)
    {
        cout << arr1[i++] << " ";
    }
    while (j < m)
    {
        cout << arr2[j++] << " ";
    }
}
int main()
{
    int n;
    cout << "enter the no of element of the 1st array : ";
    cin >> n;
    int arr1[n];
    cout << "enter the element of 1st array  : " ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }


    int m;
    cout << "enter the no of element of the 2st array : ";
    cin >> m;
    int arr2[m];
    cout << "enter the element of 2st array  : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    printUnion(arr1, arr2, n, m);
    return 0;
}


