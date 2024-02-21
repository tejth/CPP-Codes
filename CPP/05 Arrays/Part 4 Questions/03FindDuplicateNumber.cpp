#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// approach1

void findDunFunc1(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            cout << "Duplicate element is: " << nums[i] << endl;
        }
    }
}

// approach 2
void findDub2(vector<int> nums)
{
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
        {
            ans = index;
            break;
        }
        nums[index] *= -1;
    }
    cout << "Duplicate element is: " << ans << endl;
    ;
}

// approach 3(without modifying)
void findDub3(vector<int> nums)
{
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    cout << "Duplicate element is: " << nums[0];
}

int main()
{
    vector<int> nums{1, 3, 4, 2, 2};
    findDunFunc1(nums);
    findDub2(nums);
    findDub3(nums);
    return 0;
}