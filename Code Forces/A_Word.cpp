#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0, lo = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            up++;
        else if (islower(s[i]))
            lo++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (up > lo)
            s[i] = toupper(s[i]);
        else if (lo >= up)
            s[i] = tolower(s[i]);
    }
    cout << s;

    return 0;
}