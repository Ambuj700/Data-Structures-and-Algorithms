// brutforce approch
// time complexity(O^3)
#include <bits/stdc++.h>
using namespace std;

int printSubarray(int arr[], int n)
{
    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int subArraySum = 0;

        for (int j = i; j < n; j++)
        {

            for (int k = i; k < j; k++)
            {

                // cout << arr[k] << ",";
                subArraySum += arr[k];
            }
            // put a check is subArraySum> LargestSum
            largest_sum = max(subArraySum, largest_sum);
        }
    }
    return largest_sum;
}
// bruteforce approch (O^3)
int main()
{

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    printSubarray(arr, n);

    return 0;
}
