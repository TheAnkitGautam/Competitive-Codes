#include <iostream>
using namespace std;

int main()
{
    int n, k, t, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t % k == 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}