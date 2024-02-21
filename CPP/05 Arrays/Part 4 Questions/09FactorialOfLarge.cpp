#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial(int N)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 100;
            carry = x / 10;
        }
        if (carry)
        {
            ans.push_back(carry);
        }
        carry = 0;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}