#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

bool check(int k)
{
    for (int i = k - 1; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1])
            return false;
    }
    return true;
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (check(k))
        cout << k - 1;
    else
        cout << -1;

    return 0;
}