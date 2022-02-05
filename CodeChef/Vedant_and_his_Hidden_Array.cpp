#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;

        if (n == 1)
        {
            if (a % 2 == 0)
                cout << "Even" << endl;
            else
                cout << "Odd" << endl;
        }
        else
        {
            if (a % 2 == 0 and n > 1)
                cout << "Impossible" << endl;
            else if (a % 2 == 1 and n % 2 == 0)
                cout << "Even" << endl;
            else
                cout << "Odd" << endl;
        }
    }

    return 0;
}