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
        string s;
        cin >> s;
        s += s[0];
        int cnt = 0, gg = 0, rr = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
                if (s[i] == 'G')
                    gg = 1;
                else
                    rr = 1;
            }
        }
        if (cnt == 2 && rr == 1 && gg == 1)
            cout << "yes" << endl;
        else if (cnt == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}