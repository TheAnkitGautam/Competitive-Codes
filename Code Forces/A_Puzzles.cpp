#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int best = INT_MAX;
    for (int i = n; i <= m; i++)
        best = min(best, abs(v[i - 1] - v[i - n]));
    cout << best;

    return 0;
}