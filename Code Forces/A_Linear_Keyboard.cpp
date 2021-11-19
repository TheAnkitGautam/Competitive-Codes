#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> code;
        string key, word;
        cin >> key;
        for (int i = 0; i <= key.length(); i++)
        {
            char k = key[i];
            code[k] = i + 1;
        }
        
        cin >> word;
        
        auto ii = code.find(word[0]);
        int prev = ii->second, sum = 0, curr;
        for (int i = 1; i < word.length(); i++)
        {
            auto it = code.find(word[i]);
            curr = it->second;
            sum += abs(curr - prev);
            prev = curr;
        }
        cout << sum << "\n";
    }

    return 0;
}