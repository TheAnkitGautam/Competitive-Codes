#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cHund = 0, cTwo = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 100)
            cHund++;
        else
            cTwo++;
        sum += x;
    }

    if (sum % 200 != 0)
        cout << "NO" << endl;
    else if (cHund == 0 and cTwo % 2 == 0)
        cout << "YES";
    else if (cHund == 0 and cTwo % 2 != 0)
        cout << "NO" << endl;
    else
        cout << "YES";

    return 0;
}