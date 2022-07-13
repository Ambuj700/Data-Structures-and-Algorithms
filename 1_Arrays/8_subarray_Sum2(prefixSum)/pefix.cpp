// prefix sum
// time complexity(O^2)
#include <bits/stdc++.h>
using namespace std;

int printSubarray1(int arr[], int n)
{
    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int subArraySum = 0;

            for (int k = i; k < j; k++)
            {

                // cout << arr[k] << ",";
                subArraySum += arr[k];
            }
            // put a check is subArraySum> LargestSum
            largest_sum = max(largest_sum, subArraySum);
        }
    }
    return largest_sum;
}

int printSubArraySum2(int arr[], int n)
{

    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // if i>= 0 then subarraySum= prefix[j]-prefix[i-1] otherwise prefix[j]
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];

            // put a check is subArraySum>LargestSum
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}
// pefix sum approch (O^2)
int main()
{

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << printSubarray1(arr, n) << endl;
    cout << printSubArraySum2(arr, n) << endl;

    return 0;
}
