#include <iostream>
#include <vector>
using namespace std;

void solve(string s, string out, int i, vector<string> &ans)
{
    // Base Case
    if (i >= s.size())
    {
        ans.push_back(out);
        return;
    }

    // exclude
    solve(s, out, i + 1, ans);

    // include
    out += s[i];
    solve(s, out, i + 1, ans);
}

vector<string> subSequence(string s)
{
    vector<string> ans;
    string out = "";
    int i = 0;
    solve(s, out, i, ans);

    return ans;
}

int main()
{
    string s;
    cin >> s;

    vector<string> print = subSequence(s);

    for (auto &&val : print)
    {
        cout << val << endl;
    }

    return 0;
}