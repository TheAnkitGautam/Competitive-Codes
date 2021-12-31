#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        ans += x;
    }
    if (ans == 0)
        cout << "EASY";
    else
        cout << "HARD";
    return 0;
}