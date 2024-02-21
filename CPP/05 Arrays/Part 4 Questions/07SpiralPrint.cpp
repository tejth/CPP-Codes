#include <iostream>
#include <vector>
using namespace std;

vector<int> printFunct(vector<vector<int>> &arr)
{
    vector<int> ans;
    int m = arr.size();
    int n = arr[0].size();
    int total_elements = m * n;

    int startCol = 0;
    int endCol = n - 1;
    int startrow = 0;
    int endRow = m - 1;

    int count = 0;
    while (count < total_elements)
    {
        // print starting row
        for (int i = startCol; i <= endCol && count < total_elements; i++)
        {
            ans.push_back(arr[startrow][i]);
            count++;
        }
        startrow++;
        // print endcol
        for (int i = startrow; i <= endRow && count < total_elements; i++)
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;
        // ending row
        for (int i = endCol; i >= startCol && count < total_elements; i--)
        {
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;
        // start column
        for (int i = endRow; i >= startrow && count < total_elements; i--)
        {
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}};
    vector<int> result = printFunct(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}