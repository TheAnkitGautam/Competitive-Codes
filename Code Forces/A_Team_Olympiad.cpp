#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> p, m, pe;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            p.push_back(i);
        else if (x == 2)
            m.push_back(i);
        else
            pe.push_back(i);
    }

    int minTeam = min(p.size(), min(m.size(), pe.size()));
    cout << minTeam << "\n";

    int i = 0;
    while (minTeam--)
    {
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
        i++;
    }

    return 0;
}