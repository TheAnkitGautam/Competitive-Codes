#include <iostream>
#include <vector>
using namespace std;
void solve(string s)
{
    int len = s.length();
    int l = 0;
    int h = len - 1;
    int m1 = 0, m2 = 0, c1 = 0, c2 = 0;
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
            c1++;
        else
        {
            m1 = max(c1, m1);
            v.push_back(m1);
            c1 = 0;
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