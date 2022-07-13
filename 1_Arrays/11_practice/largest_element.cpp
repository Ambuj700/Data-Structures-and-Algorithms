#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int max_ele = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        max_ele = max(max_ele, arr[i]);
    }
    return max_ele;
}

int main()
{
    vector<int> arr = {1, 2, 12, 45, 14, 15, 16};

    cout << largestElement(arr);

    return 0;
}