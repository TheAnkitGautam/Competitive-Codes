#include <iostream>
using namespace std;

int main()
{
    int t, n, fac;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        fac = 1;
        for (int i = n; i > 0; i--)
        {
            fac = fac * i;
        }
        cout << fac << endl;
    }

    return 0;
}