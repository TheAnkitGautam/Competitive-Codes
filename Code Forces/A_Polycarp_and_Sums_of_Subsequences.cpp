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
        vector<ll> vec;
        for (int i = 0; i < 7; i++)
        {
            ll x;
            cin >> x;
            vec.push_back(x);
        }
        int max = vec[6];
        int a, b, c;
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                for (int k = j + 1; k < 7; k++)
                {
                    if (vec[i] + vec[j] + vec[k] == max)
                        a = vec[i], b = vec[j], c = vec[k];
                }
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}