#include <iostream>
#include <climits>
using namespace std;
int largest(int a[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
}
int smallest(int a[], int n)
{
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    return smallest;
}
int main()
{
    int arr[] = {31, 47, 90, 27, 31, 95, -1, -4, -37, 29};
    int size = 10;
    cout << "Largest in array: " << largest(arr, size) << endl;
    cout << "Smallest in array: " << smallest(arr, size);
    return 0;
}