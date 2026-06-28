#include <iostream>
#include <vector>
using namespace std;
int most_water(vector<int> height)
{
    int lp = 0, rp = height.size();
    int maxwater = 0;
    while (lp < rp)
    {
        int w = rp - lp;
        int h = min(height[lp], height[rp]);
        int currentwater = w * h;
        maxwater = max(currentwater, maxwater);
        (height[lp] < height[rp]) ? lp++ : rp--;
    }
    return maxwater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Most water: " << most_water(height);
    return 0;
}
