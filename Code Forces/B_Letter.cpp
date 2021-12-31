#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int CHAR = 256;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    string tx1, tx2;
    getline(cin, tx1);
    getline(cin, tx2);
    int co1[256] = {0};
    int co2[256] = {0};
    
    for (int i = 0; i < tx1.length(); i++)
        if (tx1[i] != ' ')
            co1[tx1[i]]++;
    for (int i = 0; i < tx2.length(); i++)
        if (tx2[i] != ' ')
            co2[tx2[i]]++;

    for (int i = 0; i < 256; i++)
    {
        if (co2[i] > co1[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}