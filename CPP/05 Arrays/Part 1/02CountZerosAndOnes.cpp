#include <iostream>
using namespace std;

void countFunc(int arr[], int size)
{
    int oneCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount = zeroCount + 1;
        }
        if (arr[i] == 1)
        {
            oneCount = oneCount + 1;
        }
    }
    cout << "Number of zeros are: " << zeroCount << endl;
    cout << "Number of ones are: " << oneCount << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 0, 0, 1, 0, 1};
    int size = 9;

    countFunc(arr, size);
    return 0;
}