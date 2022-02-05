#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int l = 1, r = 1000000;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        cout << mid << endl;

        string res;
        cin >> res;
        if (res == "<")
            r = mid - 1;
        else
            l = mid;
    }

    cout << "! " << l << endl;
}