#include <iostream>
using namespace std;
int sumofarr(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    cout << "Sum of elements of array:" << sum << endl;
}
int productofarr(int a[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= a[i];
    }
    cout << "Product of elements of array: " << product << endl;
}
int main()
{
    int arr[] = {4, 3, 2, 5, 7, 8};
    int n = 6;
    sumofarr(arr, n);
    productofarr(arr, n);
    return 0;
}
