#include <iostream>
#include <vector>
using namespace std;
int most_water(vector<int> height)
{
    int maxwater = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int w = j - i;
            int h = min(height[i], height[j]);
            int currentwater = h * w;
            maxwater = max(currentwater, maxwater);
        }
    }
    return maxwater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Most water: " << most_water(height);
    return 0;
}