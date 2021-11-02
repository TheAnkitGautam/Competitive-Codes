#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        set<int> l1;
        set<int> l2;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            l1.insert(x);
        }
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            l2.insert(y);
        }
        set<int>::iterator it1, it2;
        for (it1 = l1.begin(), it2 = l2.begin(); it1 != l1.end(), it2 != l2.end(); ++it1, ++it2)
        {
            cout << *it1 << " " << *it2 << " ";
        }
    }
    return 0;
}