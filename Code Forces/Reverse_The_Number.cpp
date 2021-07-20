#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int rev = 0;
        cin >> n;
        while (n != 0)
        {
            int b = n % 10;
            rev = rev * 10 + b;
            n /= 10;
        }
        cout << rev << endl;
    }

    return 0;
}