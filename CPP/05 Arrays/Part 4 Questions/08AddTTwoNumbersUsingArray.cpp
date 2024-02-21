#include <iostream>
#include <algorithm>
using namespace std;

string cacl_sum(int a[], int b[])
{

    int carry = 0;
    string ans;
    int i = 4 - 1;
    int j = 3 - 1;

    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }
    while (i >= 0)
    {
        int x = a[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }
    while (j >= 0)
    {
        int x = 0 + b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }

    if (carry)
    {
        ans.push_back(carry + '0');
    }
    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int arr1[] = {9, 5, 4, 9};
    int arr2[] = {2, 1, 4};
    cout << cacl_sum(arr1, arr2);

    return 0;
}