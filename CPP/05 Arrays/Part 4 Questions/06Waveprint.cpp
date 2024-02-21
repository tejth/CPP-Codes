#include <iostream>
#include <vector>
using namespace std;

void printFunc(vector<vector<int>> arr)
{
    int m = arr.size();
    int n = arr[0].size();
    for (int startCol = 0; startCol < n; startCol++)
    {
        // even column -> top-bottom
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][startCol] << " ";
            }
        }
        else
        {
            // odd column (bottom to top)
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][startCol] << " ";
            }
        }
    }
}

int main()
{

    vector<vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printFunc(v);

    return 0;
}