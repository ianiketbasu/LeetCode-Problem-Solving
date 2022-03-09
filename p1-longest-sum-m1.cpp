#include <bits/stdc++.h>
using namespace std;

int longestCommonSum(bool arr1[], bool arr2[], int n)
{
    int maxLen=0;
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = i; j < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];
            if (sum1 == sum2)
            {
                int len = j - i + 1;
                if (len > maxLen)
                {
                    maxLen = len;
                }
            }
        }
    }
    return maxLen;
}
int main()
{
    bool arr1[] = {0,1,0,1,0,0,0,0,1,1,0};
    bool arr2[] = {0,1,0,1,0,1,1,1,0,0,1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Length of the longest common span with same "
            "sum is "
         << longestCommonSum(arr1, arr2, n);
    return 0;
}