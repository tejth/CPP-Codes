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

int main()
{
    int arr[] = {1, 33, 44, 44, 44, 55, 77, 88};
    int size = 8;
    int result = firstOccur(arr, size, 44);
    cout << "Element found at: " << result << endl;

    // using stl
    vector<int> v{1, 3, 3, 3, 3, 3, 6, 7, 8};
    auto ans2 = lower_bound(v.begin(), v.end(), 3);
    cout << "ans2 is " << ans2 - v.begin() << endl;

    int arr3[] = {1, 3, 3, 3, 3, 3, 6, 7, 8};
    int size = sizeof(arr3) / sizeof(arr3[0]);
    auto ans3 = lower_bound(arr3, arr3 + size, 3);
    std::cout << "ans3 is " << ans3 - arr3 << std::endl;

    return 0;
}