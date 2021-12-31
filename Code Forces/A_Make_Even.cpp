#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int n)
{
    string str;
    stringstream ss;
    ss << n;
    ss >> str;
    if (n % 2 == 0)
        return 0;
    if (str[0] % 2 == 0)
        return 1;

    while (n)
    {
        int dig = n % 10;
        if (dig % 2 == 0)
            return 2;
        n /= 10;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}