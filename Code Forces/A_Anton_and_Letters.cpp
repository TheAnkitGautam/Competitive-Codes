#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    string s;
    getline(cin, s);
    set<char> set;

    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
            set.insert(s[i]);
    }
    
    cout << set.size();

    return 0;
}