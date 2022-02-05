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

        if (s.find("11", 0) != -1 or s.find("10", 0) != -1)
            cout << "Yes\n";
        else
            cout << "No" << endl;
    }

    return 0;
}