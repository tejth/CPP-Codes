#include <iostream>
using namespace std;

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int transpose[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}