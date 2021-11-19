#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());
    int sum = 0, c = 0;
    if (k == 0)
        cout << 0;
    else
    {
        for (int i = 0; i < 12; i++)
        {
            sum += v[i];
            c++;
            if (sum >= k)
                break;
        }
        if (sum < k)
            cout << -1;
        else
            cout << c;
    }
    return 0;
}