#include <iostream>
using namespace std;

void patt1(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void patt2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void patt3(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void patt4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void patt5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void patt6(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void patt7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char x = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void patt8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        char x = 'A';
        for (int j = i; j > 0; j--)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void patt9(int n)
{
    char x = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
        }
        cout << endl;
        x++;
    }
}

void patt10(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        space -= 2;
        cout << endl;
    }
}

void patt11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void patt12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void patt13(int n)
{
    int spaces = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces += 2;
    }
}

void patt14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void patt15(int n)
{
    int spaces = 0;
    for (int i = n; i >= 1; i--)
    {
        // stars
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        // spaces
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        // stars
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
        spaces += 2;
    }
    spaces = 8;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = spaces; k > 0; k--)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces -= 2;
    }
}
// int main(){
// patt1(5);
// patt2(5);
// patt3(5);
// patt4(5);
// patt5(5);
// patt6(5);
// patt7(5);
// patt8(5);
// patt9(5);
// patt10(4);
// patt11(5);
// patt12(5);
// patt13(5);
// patt14(5);
// patt15(5);
// return 0;
// }

#include <iostream>
using namespace std;

void patt(int n)
{
    int spaces = 8;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = spaces; k > 0; k--)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces -= 2;
    }
    spaces = 2;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        // spaces
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        // stars
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
        spaces += 2;
    }
}

int main()
{
    patt(5);
    return 0;
}