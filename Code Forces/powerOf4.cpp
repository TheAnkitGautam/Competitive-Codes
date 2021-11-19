#include <iostream>
using namespace std;

bool powerOf4(long n)
{

    if (n == 1)
        return true;
    if (n < 16)
        return false;

    long a1 = n & (n - 1);
    cout << a1 << " ";
    n /= 2;
    long a2 = n & (n - 1);

    cout << a2 << endl;
    if (a1 == 0 and a2 == 0)
        return true;
    return false;
}

int main()
{
    long n;
    cin >> n;
    cout << powerOf4(n);
    return 0;
}