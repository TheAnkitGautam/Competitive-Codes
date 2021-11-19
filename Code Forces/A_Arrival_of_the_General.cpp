#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    int maxVal = 0, minVal = 1000, maxI = 0, minI = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > maxVal)
        {
            maxI = i;
            maxVal = x;
        }
        if (x <= minVal)
        {
            minI = i;
            minVal = x;
        }
    }
    if (maxI > minI)
        cout << (maxI - 1) + (n - minI) - 1;
    else
        cout << (maxI - 1) + (n - minI);
    return 0;
}