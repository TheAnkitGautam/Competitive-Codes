#include <iostream>
using namespace std;

int main()
{
    int n, h, ans = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= h)
            ans += 1;
        else
            ans += 2;
    }
    cout << ans;

    return 0;
}