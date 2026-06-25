#include <iostream>
#include <vector>
using namespace std;
int majority_element(vector<int> &nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (val == el)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
}
int main()
{
    vector<int> nums = {1, 2, 2, 1, 2, 1, 2};
    cout << "Majority element: " << majority_element(nums);
    return 0;
}