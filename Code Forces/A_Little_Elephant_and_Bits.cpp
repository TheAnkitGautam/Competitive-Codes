#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s;
    bool f = true;

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '0' and f)
            f = false;
        else
            cout << s[i];
    }
    if (!f)
        cout << s[s.length() - 1];

    return 0;
}