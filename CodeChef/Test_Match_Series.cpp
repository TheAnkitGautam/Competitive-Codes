#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int arr[5], one = 0, two = 0, draw = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                one++;
            else if (arr[i] == 2)
                two++;
            else
                draw++;
        }
        if (one > two)
            cout << "INDIA\n";
        else if (two > one)
            cout << "ENGLAND\n";
        else
            cout << "DRAW\n";
    }
    return 0;
}