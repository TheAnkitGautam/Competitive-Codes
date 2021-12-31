#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    bool flag = false;
    // string s(n - 10, '0');
    // cout << s << " ";
    for (int i = 0; i <= 9; ++i)
    {
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << " ";
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << -1;

    return 0;
}