#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, sum = 0, c = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            if (sum == 0)
                c++;
            else
                sum--;
        }
        else
            sum += x;
    }
    cout << c;
    return 0;
}