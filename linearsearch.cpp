#include <iostream>
using namespace std;
int search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[] = {42, 13, 54, 32, 5, -22, 72, 24, 11, 29};
    int n = 10, item = 2;
    cout << "Number found at index: " << search(a, n, item);
    return 0;
}