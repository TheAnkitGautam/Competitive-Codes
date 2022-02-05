#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> v = {x, y, z};
    sort(v.begin(), v.end());

    cout << v[1] - v[0] + v[2] - v[1];

    return 0;
}