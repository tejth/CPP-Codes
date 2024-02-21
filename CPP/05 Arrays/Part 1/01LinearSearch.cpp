#include <iostream>
using namespace std;

int linear_Search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    cout << "Enter element to search: ";
    int element;
    cin >> element;

    int result = linear_Search(arr, size, element);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << result;
    }

    return 0;
}