#include <iostream>
using namespace std;
void subarrays(int arr[], int size)
{
    for (int st = 0; st < size; st++)
    {
        for (int end = st; end < size; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    subarrays(a, n);
    return 0;
}