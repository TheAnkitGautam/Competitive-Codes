#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    if (n == 1)
        cout << "I hate it";
    else
    {
        for (; i < n - 1; i++)
        {
            if (i % 2 == 0)
                cout << "I hate that"
                     << " ";
            else
                cout << "I love that"
                     << " ";
        }
        if (i % 2 == 0)
            cout << "I hate it";
        else
            cout << "I love it";
    }

    return 0;
}