#include <iostream>
using namespace std;
int main()
{
    int c = 0, n, x;
    int min, max;
    cin >> n >> x;
    min = x;
    max = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            c++;
        }
        else if (x < min)
        {
            min = x;
            c++;
        }
    }
    cout << c << endl;
}