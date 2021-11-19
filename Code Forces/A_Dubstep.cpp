#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    string s, ans;
    int flag = 0;
    cin >> s;

    for (int i = 0; i < s.length();)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (flag == 0)
                ans += ' ', flag = 1;

            i += 3;
        }
        else
            ans += s[i], i++, flag = 0;
    }
    cout << ans;

    return 0;
}