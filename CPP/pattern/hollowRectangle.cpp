#include <iostream>
using namespace std;

int main()
{
    int rowcount, columncount;
    cin >> rowcount;
    cin >> columncount;
    for (int row = 0; row < rowcount; row++)
    {
        if (row == 0 || row == 2)
        {
            for (int col = 0; col < columncount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int i = 0; i < columncount - 2; i++)
            {
                cout << "  ";
            }
            cout << "*";
        }
        cout << endl;
    }
}