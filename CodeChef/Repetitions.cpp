#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    string s;
    cin >> s;
    ll len = s.length();
    ll c = 1, m = 1;
    for (int i = 1; i <= len; i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
            // m = max(m, c);
        }
        else
        {
            m = max(m, c);
            c = 1;
        }
    }
    cout << m;

    return 0;
}