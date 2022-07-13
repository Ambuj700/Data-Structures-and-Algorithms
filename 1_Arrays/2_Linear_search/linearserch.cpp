// serching algorithm to find the index of an array
// int arr[]={1,2,0,19,73,3,34};
// int key=9;
// look for the position in given arrray

#include <bits/stdc++.h>
using namespace std;

int linear_serch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {2, 56, 34, 5, 78, 88, 34, 2};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "please Enter the key: " << endl;
    cin >> key;

    int index = linear_serch(arr, n, key);

    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << key << " is not present in Array" << endl;
    }

    return 0;
}