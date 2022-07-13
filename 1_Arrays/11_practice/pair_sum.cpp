#include <bits/stdc++.h>
using namespace std;

void printAllPairs(vector<int> A)
{
    int n = A.size();
    int larsum = 0;

    for (int i = 0; i < n; i++)
    {
        int x = A[i];

        for (int j = i + 1; j < n; j++)
        {

            int y = A[j];
            cout << x << "," << y << endl;
            // larsum = max(larsum, z);
        }
    }
    cout << endl;
    // return larsum;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    // int n = sizeof(arr) / sizeof(int);

    printAllPairs(arr);
    return 0;
}
