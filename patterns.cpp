#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << endl;

    // Pattern 1: Square grid with repeating numbers per row (1 2 3 4...)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2: Square grid with continuously increasing numbers (1 2 3 4 5 \n 6 7 8...)
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: Square grid with continuously increasing characters (A B C D \n E F G...)
    char ch1 = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch1 << " ";
            ch1++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 4: Square grid with repeating characters per row (A B C D \n A B C D...)
    for (int i = 0; i < n; i++)
    {
        char ch2 = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch2 << " ";
            ch2++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 5: Right-angled triangle with stars
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 6: Right-angled triangle with the same row number repeated (1 \n 2 2 \n 3 3 3...)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 7: Right-angled triangle with increasing numbers per row (1 \n 1 2 \n 1 2 3...)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 8: Right-angled triangle with increasing characters per row (A \n A B \n A B C...)
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 9: Right-angled triangle with the same character repeated per row (A \n B B \n C C C...)
    char a = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
        }
        cout << endl;
        a++;
    }
    cout << endl;

    // Pattern 10: Right-angled triangle with reverse counting (1 \n 2 1 \n 3 2 1...)
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 11: Inverted right-angled triangle with leading spaces and repeating numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 12: Full number pyramid (Palindromic numbers:   1 \n  1 2 1 \n 1 2 3 2 1)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 13: Hollow Diamond Pattern (Top Half)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 1)
        {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++)
            {
                cout << " ";
            }
        }
        if (i != 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    // Pattern 13: Hollow Diamond Pattern (Bottom Half)
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != (n - 1))
        {
            for (int j = 1; j <= 2 * (n - i) - 3; j++)
            {
                cout << " ";
            }
        }
        if (i != n - 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}