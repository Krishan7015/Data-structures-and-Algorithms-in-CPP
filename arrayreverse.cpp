#include <iostream>
using namespace std;
int rev_arr(int a[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {20, 32, 5, 53, 23, 64, 23, 49, 29, -2};
    int size = 10;
    rev_arr(arr, size);
    cout << "Reversed array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
