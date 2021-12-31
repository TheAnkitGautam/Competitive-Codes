#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int c = 1, m = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            c++;
            m = max(m, c);
        }
        else
            c = 1;
    }
    cout << m << endl;

    return 0;
}