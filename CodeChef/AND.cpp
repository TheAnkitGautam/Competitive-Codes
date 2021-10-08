#include <iostream>
using namespace std;

int main()
{
    int b, e, res = 1;
    cin >> b >> e;
    for (int i = b; i < e; i++)
    {
        res = res & (i & (i + 1));
    }
    cout << res;
    return 0;
}