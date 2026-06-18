#include <iostream>
using namespace std;
void unique(int a[], int size)
{
    int c[8], k = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            c[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << endl;
    }
}
int main()
{
    int arr[8] = {31, 43, 43, 65, 2, 65, 7, 2};
    int n = 8;
    cout << "Unique numbers in array: " << endl;
    unique(arr, n);
    return 0;
}