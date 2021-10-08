#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int mi = min(a, b);
        int ma = max(a, b);
        int s = ma - mi + 1;
        int arr[s];
        for (int i = 0, x = mi; x <= ma; x++, i++)
        {
            double y = ceil(((b - x) / 2.0)) + ceil(((x - a) / 2.0));
            arr[i] = y;
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << *max_element(arr, arr + n) << endl;
    }
    return 0;
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, a, b, y;
//     cin >> t;
//     while (t--)
//     {
//         int sum, x;
//         cin >> a >> b;
//         if (a == b)
//         {
//             sum = 0;
//         }
//         else if (a > b)
//         {
//             x = (b + 1);
//             y = ceil((floor)(b - x) / 2);
//             y += ceil((floor)(x - a) / 2);
//         }
//         else
//         {
//             x = (a + 1);
//             y = ceil((floor)(b - x) / 2);
//             y += ceil((floor)(x - a) / 2);
//         }
//         cout << y << endl;
//     }
//     return 0;
// }
