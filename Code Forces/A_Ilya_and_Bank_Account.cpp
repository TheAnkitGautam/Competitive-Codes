#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x > 0)
    {
        cout << x;
        return 0;
    }

    int a1 = x / 10;
    int a2 = (x / 100) * 10 + x % 10;
    cout << max(a1, a2);

    return 0;
}
