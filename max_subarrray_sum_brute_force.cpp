#include <iostream>
#include <climits>
using namespace std;
int max_sum(int a[], int n)
{
    int maxsum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentsum = 0;
        for (int end = st; end < n; end++)
        {
            currentsum += a[end];
            maxsum = max(currentsum, maxsum);
        }
    }
    return maxsum;
}
int main()
{
    int arr[] = {-4, 3, 4, 5, -1, 7, -8};
    int size = 7;
    cout << "Max subarray sum: " << max_sum(arr, size);
    return 0;
}