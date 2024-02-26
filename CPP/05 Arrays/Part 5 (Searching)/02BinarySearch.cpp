#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarFunc(int arr[], int size, int element)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (element < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 44, 55, 66, 77, 88, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    ;

    int index99 = binarFunc(arr, size, 99);
    if (index99 != -1)
    {
        cout << "Element found at index: " << index99 << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // using stl
    vector<int> v{1, 2, 3, 4, 5, 6};
    if (binary_search(v.begin(), v.end(), 3))
    {
        cout << "Found" << std::endl;
    }

    int arr1[] = {1, 2, 3, 4, 5, 6};
    if (binary_search(arr1, arr + 6, 3))
    {
        cout << "Found" << endl;
    }
    return 0;
}