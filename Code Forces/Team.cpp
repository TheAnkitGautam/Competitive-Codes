#include <iostream>
using namespace std;

int main()
{
    int n, p, v, t, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        cin >> v;
        cin >> t;
        if (p == 1 && v == 1 || v == 1 && t == 1 || t == 1 && p == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
