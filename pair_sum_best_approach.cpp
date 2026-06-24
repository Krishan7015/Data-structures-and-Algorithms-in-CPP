#include <iostream>
#include <vector>
using namespace std;
vector<int> pair_sum(vector<int> nums, int target) // return pair in sorted array with target sum by best approach

{
    int st = 0, end = nums.size() - 1;
    vector<int> ans;
    while (st < end)
    {
        if (nums[st] + nums[end] > target)
        {
            end--;
        }
        else if (nums[st] + nums[end] < target)
        {
            st++;
        }
        else
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {2, 5, 7, 8, 11, 15};
    int target = 18;
    vector<int> ans = pair_sum(vec, target);
    cout << "Indices: " << ans[0] << " and " << ans[1];
    return 0;
}