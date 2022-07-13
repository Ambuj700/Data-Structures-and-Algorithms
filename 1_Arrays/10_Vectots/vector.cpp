#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Demo Vector

    // vector<int> arr = {1, 2, 12, 14, 15};

    // fill constructer

    vector<int> arr(10, 7);

    // deleting last element

    arr.pop_back();
    // push_back - adds elements from the last

    arr.push_back(16);

    // print all the elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    // size of vector
    cout << arr.size() << endl;
    // capacity of vector
    cout << arr.capacity() << endl;
    return 0;
}