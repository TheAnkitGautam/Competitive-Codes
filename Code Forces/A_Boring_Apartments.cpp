#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v = {1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555, 6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999};
    while (t--)
    {
        int n;
        cin >> n;
        int ind = find(v.begin(), v.end(), n) - v.begin() + 1;
        int keys = (ind / 4) * 10;
        if (ind % 4 == 1)
            keys += 1;
        else if (ind % 4 == 2)
            keys += 3;
        else if (ind % 4 == 3)
            keys += 6;
        cout << keys << endl;
    }
    return 0;
}