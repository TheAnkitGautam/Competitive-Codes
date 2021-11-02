#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(string s, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == 'L' and s[i + 1] == 'L') or (s[i] == 'R' and s[i + 1] == 'R'))
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        bool ans = solve(s, n);
        if (ans == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}