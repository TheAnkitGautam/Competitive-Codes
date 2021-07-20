#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int r = 0, nr = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            r++;
        }
        else
            nr++;
    }
    if (r > nr)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";
    return 0;
}