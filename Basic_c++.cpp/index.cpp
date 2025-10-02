#include <iostream>
using namespace std;
int main()
{
    cout << "hello bro" << "\n"
         << "kaisa ha ?";
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    string name, color;
    char ch;
    cout << "Your name ? :";
    cin >> name;

    cout << "your age ? :";
    cin >> age;

    cout << "Your favorite color ?" ;
    cin >> color;

    cout << "your favorite letter ?";
    cin >> ch;

    cout << "Hello"
            " "
         << name << "\n"
         << "Age : " << age << "\n"
         << "Color : " << color << "\n"
         << "letter :" << ch;
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter number :";
    cin >> num;
    if (num > 0)
    {
        cout << num << " is positive +" << "\n";
    }
    else if (num == 0)
    {
        cout << num << "is zero 0" << "\n";
    }
    else
    {
        cout << num << "is negative -";
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter age :";
    cin >> age;
    if (age >= 18)
    {
        cout << "You can vote " << "\n";
    }
    else if (age < 18)
    {
        cout << "You are not eligible";
    }
    return 0;
}

