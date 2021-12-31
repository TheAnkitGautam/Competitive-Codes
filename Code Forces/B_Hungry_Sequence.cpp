#include <iostream>
using namespace std;
int isPrimeOptimized(int n)
{
    if (n == 1)
        return false;
    if (n == 2 or n == 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    int max = 10e7, c = 0;
    for (int i = 2; i < max; i++)
    {
        if (isPrimeOptimized(i))
        {
            cout << i << " ";
            c++;
        }
        if (c == n)
            break;
    }
    if (c != n)
        cout << -1;
    return 0;
}