#include <iostream>
using namespace std;

bool isPrimeOptimized(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    int n, m, i;
    cin >> n >> m;
    for (i = n + 1; i < m; i++)
    {
        if (isPrimeOptimized(i))
        {
            cout << "NO";
            return 0;
        }
    }
    if (isPrimeOptimized(i))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}