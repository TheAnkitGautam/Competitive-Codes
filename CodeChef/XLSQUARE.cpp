#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, a;
    cin >> t;
    while (t--)
    {
        cin >> n >> a;
        int s = sqrt(n);
        int res = s * a;
        cout << res << endl;
    }

    return 0;
}