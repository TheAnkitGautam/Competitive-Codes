#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int sq = sqrt(n);
        cout << sq << endl;
    }
    return 0;
}