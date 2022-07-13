// arrays and functions - passed by reference

#include <bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n) //(int arr[] or int * arr)
{

    cout << "In function :" << sizeof(arr) << endl;
    arr[0] = 100;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
};

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(int);
    printArray(array, n); // output =4, we just have address of the array// because it dont know the correct value here

    cout << "In main: " << sizeof(array) << endl; // outpur= 24(6*4) bcoz inside main actully we have an array;

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}