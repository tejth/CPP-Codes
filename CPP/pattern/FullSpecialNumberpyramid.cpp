#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << "   ";
        }

        // Print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++)
        {
            cout << j << "  ";
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--)
        {
            cout << j << "  ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}

//            1
//          2  3  2
//       3  4  5  4  3
//    4  5  6  7  6  5  4
// 5  6  7  8  9  8  7  6  5