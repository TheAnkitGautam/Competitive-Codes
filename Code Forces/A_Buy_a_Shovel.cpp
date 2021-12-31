#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int k, r;
    cin >> k >> r;
    int mini = 10;
    for (int i = 10; i >= 1; i--)
    {
        int temp = ((k * i) - r) % 10;
        if (temp == 0 or (k * i) % 10 == 0)
            mini = min(mini, i);
    }
    cout << mini << endl;

    return 0;
}