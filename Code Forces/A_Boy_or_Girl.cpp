#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> str;
    for (int i = 0; i < s.length(); i++)
        str.insert(s[i]);
    if (str.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}