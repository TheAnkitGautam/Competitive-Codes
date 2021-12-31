#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int search(char arr[], char key)
{
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        char arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        char x, y;
        cin >> x >> y;
        int xi = search(arr, x);
        int yi = search(arr, y);
        if (xi < yi)
            cout << x << "\n";
        else
            cout << y << "\n";
    }
    return 0;
}