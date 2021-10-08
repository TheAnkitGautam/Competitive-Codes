#include <iostream>
using namespace std;
typedef long long ll;
bool checkLucky(int c)
{
    if (c == 4 or c == 7)
        return true;
    while (c)
    {
        int dig = c % 10;
        if (!(dig == 4 or dig == 7))
            return false;
        c /= 10;
    }
    return false;
}
int main()
{
    ll n, c = 0;
    cin >> n;
    while (n)
    {
        int digit = n % 10;
        if (digit == 4 or digit == 7)
            ++c;
        n /= 10;
    }
    if (checkLucky(c))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}