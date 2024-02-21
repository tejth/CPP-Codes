#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {-1, 2, 0, 4, 42, 6, 7, 8, 99};
    int size = 9;

    cout << findMax(arr, size);

    return 0;
}