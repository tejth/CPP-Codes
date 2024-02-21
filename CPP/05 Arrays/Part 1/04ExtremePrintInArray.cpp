#include <iostream>
using namespace std;

void printExtreme(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        if (low == high)
        {
            cout << arr[low] << " ";
        }
        else
        {
            cout << arr[low] << " ";
            cout << arr[high] << " ";
        }
        low++;
        high--;
    }
}

int main()
{
    int arr[7] = {1, 3, 4, 5, 6, 7, 8};
    int size = 7;

    printExtreme(arr, size);
}