#include <iostream>
#include <climits>
using namespace std;
int smallest(int a[], int size)
{
    int small = INT_MAX, index;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
            index = i;
        }
    }
    return index;
}
int largest(int a[], int size)
{
    int large = INT_MIN, index;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[] = {24, -54, 75, 35, 11};
    int n = 5;
    cout << "Array before swapping: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    swap(arr[smallest(arr, n)], arr[largest(arr, n)]);
    cout << "Array after swapping: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
