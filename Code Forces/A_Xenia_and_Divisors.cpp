#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, x, count[8] = {0};
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        count[x]++;
    }
    if ((count[5] == 0 && count[7] == 0) && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6])
    {
        for (int i = 0; i < count[4]; ++i)
        {
            printf("1 2 4\n");
        }
        count[2] -= count[4];
        for (int i = 0; i < count[2]; ++i)
        {
            printf("1 2 6\n");
        }
        for (int i = 0; i < count[3]; ++i)
        {
            printf("1 3 6\n");
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}