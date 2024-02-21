#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> commonFunc(int arr1[], int arr2[], int arr3[])
{
    vector<int> ans;
    set<int> st;
    int size1 = 6;
    int size2 = 5;
    int size3 = 8;
    int i, j, k;
    i = j = k = 0;
    while (i < size1 && j < size2 && k < size3)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            st.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}

// approach 2

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> result = commonFunc(arr1, arr2, arr3);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}