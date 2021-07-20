#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        cin >> n;
        while (n != 0)
        {
            int b = n % 10;
            if (b == 4)
            {
                count++;
            }
            n /= 10;
        }
        cout << count << endl;
    }
    return 0;
}