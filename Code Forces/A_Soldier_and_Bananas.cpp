#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int p = (w * (k + w * k)) / 2;
    int b = p - n;
    if (b > 0)
        cout << b;
    else
        cout << 0;

    return 0;
}