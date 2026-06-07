#include <iostream>
using namespace std;
int dectobit(int n)
{
    int bit = 0, rem, pow = 1;
    while (n > 0)
    {
        rem = n % 2;
        bit += rem * pow;
        pow *= 10;
        n = n / 2;
    }
    return bit;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Decimal to binary: " << dectobit(n);
    return 0;
}
