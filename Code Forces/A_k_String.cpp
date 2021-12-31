#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int k;
    cin >> k;
    int arr[26] = {0};

    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; i++)
        arr[s[i] - 'a']++;

    string ss;
    int i = 0;
    for (; i < 26; i++)
    {
        if (arr[i] % k != 0)
            break;
        else
            ss.append(arr[i] / k, 'a' + i);
    }
    if (i == 26)
        while (k--)
            cout << ss;
    else
        cout << -1;

    return 0;
}