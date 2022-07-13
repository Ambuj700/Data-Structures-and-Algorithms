#include <bits/stdc++.h>
using namespace std;

// int lowerBound(vector<int> A, int Val)
// {
//     int sz = A.size();
//     int start = 0;
//     int end = sz - 1;
//     int answer = -1;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (A[mid] > Val)
//         {
//             answer = Val;
//         }
//         else
//         {
//             answer = A[mid];
//             start = mid + 1;
//         }
//         }
//     return answer;
// }
// Expected Time Complexity: O(logN)
// Hint: Binary Search

int lowerBound(vector<int> A, int Val)
{

    int sz = A.size();

    int l = 0, r = (sz - 1);

    int answer = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (A[mid] > Val)
        {
            r = mid - 1;
        }
        else
        {
            answer = A[mid];
            l = mid + 1;
        }
    }

    return answer;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6};
    int Val = 4;

    cout << lowerBound(arr, Val) << endl;

    return 0;
}