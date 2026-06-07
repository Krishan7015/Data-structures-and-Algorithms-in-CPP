#include <iostream>
using namespace std;
int bittodec(int n)
{
    int rem, dec = 0, pow = 1;
    while (n > 0)
    {
        rem = n % 10;
        dec += rem * pow;
        n = n / 10;
        pow *= 2;
    }
    return dec;
}
int main()
{
    int n;
    cout << "Enter binary number to convert it into decimal: ";
    cin >> n;
    cout << "Binary to decimal: " << bittodec(n);
    return 0;
}