#include <iostream>
using namespace std;

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
    int arr[] = {1, 33, 44, 44, 44, 55, 77, 88};
    int size = 8;
    int result = LastOccur(arr, size, 44);
    cout << "Element found at: " << result << endl;

    return 0;
}