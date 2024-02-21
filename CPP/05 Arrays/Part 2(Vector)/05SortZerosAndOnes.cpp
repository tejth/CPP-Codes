#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        if (arr[i] == 1)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}