#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int num = 1;
        for (int column = n - 1; column >= row; column--)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}