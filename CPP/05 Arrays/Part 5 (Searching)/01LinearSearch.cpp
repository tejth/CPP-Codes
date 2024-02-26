#include <iostream>
using namespace std;

int linearFunc(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 53)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {22, 4, 1, 66, 74, 3, 53};
    if (linearFunc(arr))
    {
        cout << "element  found at: " << linearFunc(arr) << endl;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}