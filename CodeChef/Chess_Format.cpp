#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int s = a + b;
        if (s < 3)
            cout << "1" << endl;
        else if (s >= 3 && s <= 10)
            cout << "2" << endl;
        else if (s >= 11 && s <= 60)
            cout << "3" << endl;
        else if (s > 60)
            cout << "4" << endl;
    }
    return 0;
}