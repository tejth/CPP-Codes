#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char arr[100];
    cin.getline(arr, 90);
    cout << arr << endl;

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = ' ';
        }
        else
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
    cout << arr;

    return 0;
}