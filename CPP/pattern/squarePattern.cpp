#include <iostream>

using namespace std;

int main()
{
    // outer-loop (row observe)
    for (int row = 0; row < 4; row++)
    {
        // inner-loop(column observe)
        for (int col = 0; col < 4; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}