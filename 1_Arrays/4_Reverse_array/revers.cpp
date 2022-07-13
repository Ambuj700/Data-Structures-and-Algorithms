#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        // swap is inbuilt function that reverse the array
        swap(arr[s], arr[e]);

        s += 1;
        e -= 1;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 45, 60, 90};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}