#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        left.push_back(l);
        right.push_back(r);
    }
    int le = count(left.begin(), left.end(), 1);
    int ri = count(right.begin(), right.end(), 1);
    cout << min(le, n - le) + min(ri, n - ri);

    return 0;
}