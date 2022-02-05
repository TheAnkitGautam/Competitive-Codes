#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i)
{
    int n = s.length() - 1;

    if (i > n)
        return true;
    if (s[i] != s[n - i])
        return false;
    else
        return checkPalindrome(s, i + 1);
}

int main()
{
    string s = "radar";

    cout << checkPalindrome(s, 0);

    return 0;
}