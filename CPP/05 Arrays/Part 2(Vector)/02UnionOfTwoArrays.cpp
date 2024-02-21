#include <iostream>
#include <vector>
using namespace std;

vector<int> unionfunc(vector<int> a, vector<int> b)
{

    vector<int> result;

    for (int i = 0; i < a.size(); i++)
    {
        int el = a[i];
        for (int j = 0; j < b.size(); j++)
        {
            if (el == b[j])
            {
                // mark
                b[j] = -1;
            }
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        result.push_back(a[i]);
    }
    for (int j = 0; j < b.size(); j++)
    {
        if (b[j] != -1)
        {
            result.push_back(b[j]);
        }
    }
    return result;
}

int main()
{
    vector<int> arr1{2, 3, 6, 8};
    vector<int> arr2{1, 3, 7, 3, 4};

    vector<int> result;
    result = unionfunc(arr1, arr2);
    for (int i = 0; i < result.size(); i++)
    {
        /* code */
        cout << result[i] << " ";
    }

    return 0;
}