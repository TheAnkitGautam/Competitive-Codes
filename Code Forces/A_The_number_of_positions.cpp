#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int c = 0;
    int temp = n - a;
    for (int i = a + 1; i <= n; i++)
    {
        if ((n - i) <= b)
            c++;
    }
    cout << c;
    return 0;
}