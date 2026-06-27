#include <iostream>
using namespace std;
double binary_exp(double x, int n)
{
    long binform = n;
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    if (binform == 0)
    {
        return 1;
    }
    if (x == -1 && n % 2 == 1)
    {
        return -1;
    }
    if (x == -1 && n % 2 == 0)
    {
        return 1;
    }
    if (binform < 0)
    {
        x = 1 / x;
        binform = -binform;
    }
    double ans = 1;
    while (binform > 0)
    {
        if (binform % 2 == 1)
        {
            ans *= x;
        }
        x = x * x;
        binform /= 2;
    }
    return ans;
}
int main()
{
    double x = 2;
    int n = 5;
    cout << "Answer: " << binary_exp(x, n) << endl;
    return 0;
}