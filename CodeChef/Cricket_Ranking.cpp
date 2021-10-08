#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int run(int r1, int r2)
{
    if (r1 > r2)
        return 1;
    else
        return 0;
}
int wicket(int w1, int w2)
{
    if (w1 > w2)
        return 1;
    else
        return 0;
}
int cat(int c1, int c2)
{
    if (c1 > c2)
        return 1;
    else
        return 0;
}

int main()
{
    int t, r1, w1, c1, r2, w2, c2;
    cin >> t;
    while (t--)
    {
        int f = 0;
        cin >> r1 >> w1 >> c1;
        cin >> r2 >> w2 >> c2;
        f = run(r1, r2) + wicket(w1, w2) + cat(c1, c2);
        if (f >= 2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}