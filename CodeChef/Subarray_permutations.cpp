#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k == 1 and n == 1)
            cout << "1" << endl;
        else if (k < 2)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < k - 1; i++)
                cout << i + 1 << " ";
            for (int i = 0; i < n - k + 1; i++)
                cout << n - i << " ";
            cout << endl;
        }
    }

    return 0;
}