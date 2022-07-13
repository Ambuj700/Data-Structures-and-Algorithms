#include <bits/stdc++.h>
using namespace std;

// int maximum_subarray_sum(int arr[], int n)
// {
//     int current_sum = 0;
//     int maximum_sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         current_sum = current_sum + arr[i];
//         if (current_sum < 0)
//         {
//             current_sum = 0;
//         }
//         maximum_sum = max(maximum_sum, current_sum);
//     }
//     return maximum_sum;
// }

int maxSumSubarray(vector<int> A)
{
    bool f = true;
    int rr = INT_MIN;
    for (auto x : A)
    {
        if (x > 0)
            f = false;
        if (x > rr)
            rr = x;
    }
    if (f)
        return rr;
    int maxSumFromPrevIndexToLeft = 0;
    int finalAnswer = 0;

    int temprory = 0;
    int arraySize = A.size();

    for (int i = 0; i < arraySize; i++)
    {
        temprory = maxSumFromPrevIndexToLeft + A[i];
        if (temprory < A[i])
        {
            maxSumFromPrevIndexToLeft = A[i];
        }
        else
        {
            maxSumFromPrevIndexToLeft = temprory;
        }
        finalAnswer = max(finalAnswer, maxSumFromPrevIndexToLeft);
    }

    return finalAnswer;
}

int main()
{

    vector<int> arr = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

    int n = sizeof(arr) / sizeof(int);
    cout << maxSumSubarray(arr) << endl;

    return 0;
}