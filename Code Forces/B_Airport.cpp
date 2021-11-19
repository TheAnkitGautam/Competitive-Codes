#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end(), greater<int>());
    int maxP = 0;
    for (int i = 0; i < n; i++)
    {
        int x = *max_element(v1.begin(), v1.end());
        maxP += x;
        v1.erase(v1.begin());
        --x;
        if (x > 0)
            v1.push_back(x);
    }

    cout << maxP << " ";
    int minP = 0;
    sort(v2.begin(), v2.end());
    while (n != 0)
    {
        int x = *min_element(v1.begin(), v1.end());
        while (x != 0)
        {
            minP += x;
            x--;
            n--;
        }
        v2.erase(v2.begin());
    }
    cout << minP;
    return 0;
}