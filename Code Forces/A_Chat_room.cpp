#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s, f = "hello";
    cin >> s;

    int ans = 0, j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == f[j])
            j++, ans++;
        if (ans == 5)
            break;
    }
    if (ans == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}