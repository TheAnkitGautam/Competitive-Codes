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
        int n;
        cin >> n;
        vector<pair<char, char>> v;
        for (int i = 0; i < n - 2; i++)
        {
            string temp;
            cin >> temp;
            v.push_back({temp[0], temp[1]});
        }
        string ans;
        ans = v[0].first;
        int len = v.size();
        bool f = false;
        for (int i = 0; i < len - 1; i++)
        {
            if (v[i].second == v[i + 1].first)
                ans += v[i].second;
            else
            {
                ans += v[i].second;
                ans += v[i + 1].first;
                f = true;
            }
        }
        if (!f)
            ans += v[len - 1].second;
        ans += v[len - 1].second;
        cout << ans << endl;
    }
    return 0;
}