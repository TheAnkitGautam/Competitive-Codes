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
        int n, x, k;
        vector<int> A, B;
        cin >> n >> x >> k;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            A.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            B.push_back(b);
        }

        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (abs(A[j] - B[j]) <= k)
                c++;
        }
        if (c >= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}