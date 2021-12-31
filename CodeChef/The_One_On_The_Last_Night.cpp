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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        while (n)
        {
            int dig = n % 10;
            v.push_back(dig);
            n /= 10;
        }

        for (int i = 0; i < k; i++)
        {
            int minIdx = min_element(v.begin(), v.end()) - v.begin();
            v[minIdx]++;
        }
        int ans = 1;
        for (int i = 0; i < v.size(); i++)
            ans *= v[i];
        cout << ans << endl;
    }
    return 0;
}