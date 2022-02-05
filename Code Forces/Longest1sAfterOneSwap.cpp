#include <iostream>
#include <vector>
using namespace std;
void solve(string s)
{
    int len = s.length();
    int l = 0;
    int h = len - 1;
    int m = 0, c = 0, f = 0;
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
            c++;
        else
        {
            f++;
            m = max(c, m);
            v.push_back(m);
            c = 0;
        }
    }
    for (auto val : v)
        cout << val << " ";
}
int main()
{
    string s;
    cin >> s;
    solve(s);
    return 0;
}