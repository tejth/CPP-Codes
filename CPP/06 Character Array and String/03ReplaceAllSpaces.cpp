#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char arr[20];
    cin.getline(arr, 20);

    int i = 0;
    while (i < strlen(arr))
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
        i++;
    }
    cout << arr;

    return 0;
}