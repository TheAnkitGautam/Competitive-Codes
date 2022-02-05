#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        char c = 'N';

        if (count(s.begin(), s.end(), c) == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}