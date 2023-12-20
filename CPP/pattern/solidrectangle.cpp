#include <iostream>

using namespace std;

int main()
{
    // outer-loop (row observe)
    for (int i = 0; i < 3; i++)
    {
        // inner-loop(column observe)
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}