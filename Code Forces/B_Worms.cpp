#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v;

int search(int x)
{
    int lo = 0, hi = v.size() - 1, mid;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (v[mid] < x)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] >= x)
        return lo;
    else if (v[hi] >= x)
        return hi;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, a;
    cin >> n;
    cin >> a;
    int beg = 1, end = a;

    for (int i = 0; i < n - 1; i++)
    {
        v.push_back(beg);
        v.push_back(end);
        beg += a;
        cin >> a;
        end += a;
    }
    v.push_back(beg);
    v.push_back(end);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int id = search(x);
        cout << (id / 2) + 1 << endl;
    }

    return 0;
}