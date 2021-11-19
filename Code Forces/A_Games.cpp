#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> ip;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        ip.push_back({x, y});
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i != j and ip[i].first == ip[j].second)
                c++;
    }
    cout << c;
    return 0;
}