#include <iostream>
using namespace std;

int main()

{
    int a, b, c = 0;
    cin >> a >> b;
    int *arr[a];
    while (a--)
    {
        int n;
        cin >> n;
        arr[c] = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[c][i];
        }
        c++;
    }
    while (b--)
    {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << "\n";
    }
    return 0;
}