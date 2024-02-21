#include <iostream>
#include <vector>
using namespace std;

// method 1
void sortColorFunc(vector<int> &nums)
{
    int zeros, ones, twos;
    zeros = ones = twos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zeros++;
        }
        else if (nums[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
    int i = 0;
    while (zeros--)
    {
        nums[i] = 0;
        i++;
    }
    while (ones--)
    {
        nums[i] = 1;
        i++;
    }
    while (twos--)
    {
        nums[i] = 2;
        i++;
    }
}

// method 2(in-place method)
void sortFunc2(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int medium = 0;

    while (medium <= high)
    {
        if (nums[medium] == 0)
        {
            swap(nums[low], nums[medium]);
            low++;
            medium++;
        }
        else if (nums[medium] == 1)
        {
            medium++;
        }
        else
        {
            swap(nums[medium], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums{2, 0, 2, 1, 1, 0};
    sortFunc2(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
