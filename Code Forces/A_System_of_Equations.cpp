#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m;
    int c = 0;
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            int eq1 = i * i + j - n;
            int eq2 = i + j * j - m;
            if (eq1 == 0 and eq2 == 0)
                c++;
        }
    }
    cout << c;

    return 0;
}