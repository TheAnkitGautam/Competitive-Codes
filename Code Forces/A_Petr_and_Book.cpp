#include <iostream>
using namespace std;

int main()
{
    int n, c = 0, s = 0;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
        cin >> arr[i];
    for (int i = 0; i < 7; i++)
    {
        n -= arr[i];
        if (n <= 0)
        {
            cout << i + 1;
            break;
        }
        if (i == 6)
            i = -1;
    }

    return 0;
}
