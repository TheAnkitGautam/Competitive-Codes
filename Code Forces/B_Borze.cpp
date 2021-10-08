#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len;)
    {
        if (s[i] == '-' && s[i + 1] == '.')
            cout << "1", i += 2;
        else if (s[i] == '-' && s[i + 1] == '-')
            cout << "2", i += 2;
        else
            cout << "0", i++;
    }

    return 0;
}
