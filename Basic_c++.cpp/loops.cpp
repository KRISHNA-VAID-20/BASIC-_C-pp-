// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter number :";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << "x" << i << "=" << n * i << endl;
    }
    return 0;
}