#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int time = 240 - k;
    int c = 0;
    for (int i = 1; time >= 0 and c <= n; i++)
    {
        c++;
        time = time - (5 * i);
    }
    cout << c - 1;
    return 0;
}