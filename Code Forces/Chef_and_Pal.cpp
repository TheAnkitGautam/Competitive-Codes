#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
            cout << -1 << endl;
        else
        {
            string s;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    s += '1';
                else
                    s += '0';
            }
            cout << s << endl;
        }
    }

    return 0;
}