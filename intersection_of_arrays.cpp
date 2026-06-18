#include <iostream>
using namespace std;
void intersection(int a[], int b[], int size)
{
    int c[5], k = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = b[j];
                k++;
                break;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << endl;
    }
}

int main()
{
    int a[5] = {2, 4, 2, 5, 7};
    int b[5] = {4, 5, 7, 9, 0};
    int n = 5;
    intersection(a, b, n);
    return 0;
}