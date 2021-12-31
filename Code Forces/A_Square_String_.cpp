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
        int len = s.length();
        if (len % 2 != 0)
            cout << "NO\n";
        else
        {
            int mid = len / 2;
            bool flag = true;
            for (int i = 0; i < mid; i++)
            {
                if (s[i] != s[mid + i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}