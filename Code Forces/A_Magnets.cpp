#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, prev = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x != prev)
            ans++;
        prev = x;
    }
    cout << ans;
    return 0;
}