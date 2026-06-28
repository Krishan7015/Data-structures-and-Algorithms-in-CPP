#include <iostream>
#include <vector>
using namespace std;
int max_profit(vector<int> nums)
{
    int maxprofit = 0;
    int bestbuy = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > bestbuy)
        {
            maxprofit = max(maxprofit, nums[i] - bestbuy);
        }
        bestbuy = min(bestbuy, nums[i]);
    }
    return maxprofit;
}
int main()
{
    vector<int> price = {5, 2, 1, 6, 8, 3};
    cout << "Max profit: " << max_profit(price);
    return 0;
}