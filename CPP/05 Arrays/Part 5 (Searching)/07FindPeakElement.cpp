#include <iostream>
using namespace std;

int findPeak(int arr[], int size)
{
    int low = 0;
    int high = size - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return arr[low];
}

int main()
{
    int arr[] = {1, 10, 12, 9, 8, 2};
    int size = 5;
    cout << findPeak(arr, size);

    return 0;
}