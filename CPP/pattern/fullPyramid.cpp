#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // print spaces
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }

        // print asterisks
        for (int star = 0; star < 2 * row + 1; star++)
        {
            cout << "*";
        }

        // move to the next line after each row
        cout << endl;
    }

    return 0;
}
