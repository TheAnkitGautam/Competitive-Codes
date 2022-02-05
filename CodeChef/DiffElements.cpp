#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int solve(vector<int> arr)
{
    int ans = 0;
    int n = arr.size();

    for (int i = 0; i <= n; i += 2)
    {
        if (arr[i] == arr[i + 1])
            ans++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        int ans = solve(arr);

        cout << ans << endl;
    }

    return 0;
}