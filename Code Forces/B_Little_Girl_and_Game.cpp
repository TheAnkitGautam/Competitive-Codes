#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
int fq[30], odd = 0;
int main()
{

    cin >> s;
    for (int i = 0; i < s.length(); i++)
        fq[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (fq[i] % 2 == 1)
            odd++;
    }
    if (odd == 0 or odd == 1)
    {
        cout << "First";
        return 0;
    }
    if (odd % 2 == 0)
    {
        cout << "Second";
        return 0;
    }
    cout << "First";
    return 0;
}