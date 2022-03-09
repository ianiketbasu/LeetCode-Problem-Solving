
// Using Moore’s Voting Algorithm


#include <iostream>
using namespace std;

/*find the majority element of the array*/
int findMajorityElement(int arr[], int n)
{
    int maj_index = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[maj_index] == arr[i])
        {
            count++;
        }
        else
            count--;

        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return arr[maj_index];
}

bool isMajority(int arr[], int n, int me) /*me=mejority element*/
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == me)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return 1;
    }
    else
        return 0;
}

void printMajorityElement(int arr[], int n)
{
    int me = findMajorityElement(arr, n);
    if (isMajority(arr, n, me))
    {
        cout << me;
    }
    else
        cout << "-1";
}

int main()
{
    int arr[] = {1, 2, 2, 2, 1, 3, 5, 2, 2, 1, 1, 1, 1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printMajorityElement(arr, n);

    return 0;
}