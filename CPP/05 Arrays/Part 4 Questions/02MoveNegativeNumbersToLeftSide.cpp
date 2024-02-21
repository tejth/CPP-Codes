#include <iostream>
#include <vector>

using namespace std;

void movefunc1(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low < high)
    {
        if (nums[low] < 0)
        {
            low++;
        }
        else if (nums[high] > 0)
        {
            high--;
        }
        else
        {
            swap(nums[low], nums[high]);
        }
    }
}

int main()
{
    vector<int> nums{1, -2};
    movefunc1(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}