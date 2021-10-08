#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, s;
    cin >> n;
    s = n / 5;
    if (n % 5 == 0)
        cout << s << endl;
    else
        cout << (s + 1) << endl;

    return 0;
}