#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOccur(int arr[], int size, int element)
{
    int index = -1;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == element)
        {
            index = mid;
            end = mid - 1;
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
    return index;
}

int LastOccur(int arr[], int size, int element)
{
    int index = -1;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == element)
        {
            index = mid;
            start = mid + 1;
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
    return index;
}

int main()
{
    int arr3[] = {1, 3, 3, 3, 3, 3, 6, 7, 8};
    int size = sizeof(arr3) / sizeof(arr3[0]);

    int TotalOccurence = LastOccur(arr3, size, 3) - firstOccur(arr3, size, 3) + 1;
    cout << "Total occurences are#: " << TotalOccurence << endl;
    return 0;
}