#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if ((i + 2 * j) == n and (i + j) % m == 0)
            {
                cout << i + j;
                return 0;
            }
        }
    }

    cout << -1;

    return 0;
}

// x + 2y = n
// (x + y)%m == 0