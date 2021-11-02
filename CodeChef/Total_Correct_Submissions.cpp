#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<string, int> m;
        string s;
        int x;
        for (int i = 0; i < 3 * n; i++)
        {
            cin >> s >> x;
            m[s] += x;
        }
        vector<int> ans;
        for (auto val : m)
            ans.push_back(val.second);
        sort(ans.begin(), ans.end());
        for (int s : ans)
            cout << s << ' ';
        cout << '\n';
    }
    return 0;
}