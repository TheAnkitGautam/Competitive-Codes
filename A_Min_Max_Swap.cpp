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
        int n;
        cin >> n;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                swap(a[i], b[i]);
        }

        int maxa = *max_element(a, a + n);
        int maxb = *max_element(b, b + n);
        cout << maxa * maxb << endl;
    }
    return 0;
}