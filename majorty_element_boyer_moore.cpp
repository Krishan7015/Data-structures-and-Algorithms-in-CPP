#include <iostream>
#include <vector>
using namespace std;
int majority_element(vector<int> nums)
{
    int ans = 0, freq = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    int count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> nums = {3, 2, 3, 2, 1, 3, 3, 3, 1};
    cout << "Majority element: " << majority_element(nums);
    return 0;
}