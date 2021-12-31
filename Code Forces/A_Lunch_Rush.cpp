#include <iostream>

using namespace std;

int main()
{
    int n, k, max_joy = INT_MIN, joy = 0;
    cin >> n >> k;
    while (n--)
    {
        int f, t;
        cin >> f >> t;
        if (t > k)
            joy = f - (t - k);
        else
            joy = f;

        max_joy = max(max_joy, joy);
    }
    cout << max_joy << endl;

    return 0;
}