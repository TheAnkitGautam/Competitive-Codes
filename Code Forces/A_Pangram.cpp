#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ans[26] = {false};

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
            ans[s[i] - 'A'] = true;
        else
            ans[s[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (ans[i] == false)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}