#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    ll n;
    int t, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a = sqrt(n);
        if (isPrime(a) && a * a == n)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ll n;
//     int t, j;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         j = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 j++;
//             }
//         }
//         if (j == 3)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
