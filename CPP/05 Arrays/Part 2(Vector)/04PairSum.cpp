#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> arr, int sum)
{
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {

            if (arr[i] + arr[j] == sum)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}

int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    int sum = 11;

    pairSum(arr, sum);
    return 0;
}