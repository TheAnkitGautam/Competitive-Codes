#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    string s;
    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> p;
        m[s] += p;
    }
    int ms = INT_MIN;
    for (auto val : m)
        ms = max(ms, val.second);
    
    return 0;
}