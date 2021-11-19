#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int c1 = 0, m1 = 0, c0 = 0, m0 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            c1++;
        else if (s[i] == '0')
        {
            c1 = 0;
        }
        m1 = max(c1, m1);

        if (s[i] == '0')
            c0++;
        else if (s[i] == '1')
        {
            c0 = 0;
        }
        m0 = max(c0, m0);
    }
    if (m1 >= 7 or m0 >= 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}