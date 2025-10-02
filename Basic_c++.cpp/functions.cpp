// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void greet()
// {
//     cout << "hello im KV learinign C++ " << endl;
// }
// int main()
// {
//     greet();
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int multiply(int a, int b)
// {
//     return a * b;
// }

// int main()
// {
//     int result;
//     result = multiply(5, 12);
//     cout << result;
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n1, n2, result;
//     char op;
//     cout << "Enter numbre 1 :";
//     cin >> n1;

//     cout << "Enter numbre 2 :";
//     cin >> n2;

//     cout << "Enter operator (+,-,x,/) :";
//     cin >> op;

//     if (op == '+')
//     {
//         result = n1 + n2;
//         cout << result;
//     }
//     else if (op == '-')
//     {
//         result = n1 - n2;
//         cout << result;
//     }
//     else if (op == '*')
//     {
//         result = n1 * n2;
//         cout << result;
//     }
//     else if (op == '/')
//     {
//         result = n1 / n2;
//         cout << result;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int result;
//     result = sum(5, 10);
//     cout << "Sum is : " << result;
//     return 0;
// }

#include <iostream>
using namespace std;

int getnumber()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    return n;
}

int main()
{

    cout << "Number Entered : " << getnumber();
    return 0;
}

// #include <iostream>n
// using namespace std;

// void welcome(string name)
// {
//     cout << "Welcome " << name << " ";
// }

// int main()
// {
//     string name;
//     cout << "Enter your name : ";
//     cin >> name;
//     welcome(name);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void quote()
// {
//     cout << "Who cares brother ??? \n";
//     cout << "Smash everybody !!";
// }

// int main()
// {
//     quote();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void greet()
// {
//     cout << "Hello !";
// }

// void greet(string name)
// {
//     cout << "Hello " << name;
// }

// int main()
// {
//     string name;
//     cout << "Enter name (press '-' to skip ): ";
//     cin >> name;

//     if (name == "-")
//     {
//         greet();
//     }
//     else
//     {
//         greet(name);
//     }
//     return 0;
// }