#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int s, n, a, b;
    cin >> s >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (s <= v[i].first)
        {
            cout << "NO";
            return 0;
        }
        else
            s += v[i].second;
    }
    cout << "YES";
    return 0;
}
