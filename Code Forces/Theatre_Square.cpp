#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n, m, a;
    cin >> n >> m >> a;
    unsigned long long res = ceil((double)m/a)*ceil((double)n/a);
    cout << res << endl;
    return 0;
}