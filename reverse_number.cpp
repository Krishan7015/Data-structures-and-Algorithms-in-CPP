#include <iostream>
using namespace std;
int revnum(int n)
{
    int rem, rev = 0;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;

        n = n / 10;
    }
    return rev;
}
int main()
{
    int a;
    cout << "Enter a number to reverse it: ";
    cin >> a;
    cout << "Reversed number: " << revnum(a) << endl;
    return 0;
}
