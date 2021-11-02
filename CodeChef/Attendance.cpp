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
        map<string, int> m;
        cin >> n;
        string fn[110], ln[110];
        for (int i = 0; i < n; i++)
        {
            cin >> fn[i];
            cin >> ln[i];
            m[fn[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[fn[i]] == 1)
                cout << fn[i] << endl;
            else
                cout << fn[i] << " " << ln[i] << endl;
        }
    }
    return 0;
}