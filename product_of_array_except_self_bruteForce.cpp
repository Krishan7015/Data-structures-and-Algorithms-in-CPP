#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                product *= nums[j];
            }
        }
        ans.push_back(product);
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 3, 4, 5, 6};
    vector<int> answer = product(nums);
    cout << "Product of array except self: " << endl;
    for (int val : answer)
    {
        cout << val << endl;
    }
    return 0;
}