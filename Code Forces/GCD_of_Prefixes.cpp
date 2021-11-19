#include <iostream>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int b[n + 1];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int p = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] % b[i + 1] and (b[i] != 0 or b[i + 1] != 0))
                p = 0;
        }

        if (p)
        {
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}