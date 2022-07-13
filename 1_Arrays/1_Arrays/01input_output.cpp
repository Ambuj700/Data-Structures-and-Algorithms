#include <bits/stdc++.h>
using namespace std;

int main()
{

    int marks[100] = {0}; // if you initialize some elements then remaining digits become zero.
    int n;

    // assign a value
    marks[0] = -1;

    cout << "Enter the number of students: ";
    cin >> n;
    // input
    for (int i = 1; i <= n; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i <= 100; i++)
    {
        cout << marks[i] << ',';
    }

    return 0;
}

// output
