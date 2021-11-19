#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int five = count(v.begin(), v.end(), 5);
    int zero = n - five;
    if (zero == 0)
        cout << -1;
    else if (five < 9)
        cout << 0;
    else
    {
        five = five - five % 9;
        for (int i = 0; i < five; i++)
            cout << 5;
        for (int i = 0; i < zero; i++)
            cout << 0;
    }

    return 0;
}
