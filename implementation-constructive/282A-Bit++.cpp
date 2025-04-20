#include <iostream>
using namespace std;

int main()
{
    int n;
    int x = 0;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "X--" || str == "--X")
            x = x - 1;
        else if (str == "X++" || str == "++X")
            x = x + 1;
    }
    cout << x;
    cout << endl;
    return 0;
}

// Another solution
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     int x = 0;
//     while (t--)
//     {
//         string n;
//         cin >> n;
//         if (n[1] == '+')
//         {
//             x++;
//         }
//         else
//         {
//             x--;
//         }
//     }
//     cout << x;
// }