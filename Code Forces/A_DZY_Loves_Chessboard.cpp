#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int MAX = 110;

int main()
{
    int n, m;
    char s[MAX][MAX];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (s[i][j] == '.')
            {
                cout << ((i + j) % 2 ? 'W' : 'B');
            }
            else
                cout << s[i][j];
        cout << endl;
    }
    return 0;
}
