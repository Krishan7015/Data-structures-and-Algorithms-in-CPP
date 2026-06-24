#include <iostream>
#include <vector>
using namespace std;
vector<int> pair_sum(vector<int> nums, int target) // return pair in sorted array with target sum using brute force
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {1, 5, 7, 11, 14};
    int target = 18;
    vector<int> ans = pair_sum(a, target);
    cout << "Indices: " << ans[0] << " and " << ans[1];
    return 0;
}