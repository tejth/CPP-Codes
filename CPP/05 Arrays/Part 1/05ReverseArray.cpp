#include <iostream>
using namespace std;

void reverseArry(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    reverseArry(arr, size);
    return 0;
}