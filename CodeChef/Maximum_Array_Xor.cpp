#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long long int

int main()
{
    int t, n;
    long int k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin>>k;
        int s = n * n;
        int arr[s];
        long int sum = 0;
        for (int i = 0; i < s; i++)
        {
            arr[i] = i;
        }
        for (int i = 0; i < k; i++)
        {
            int temp = arr[0];
            arr[0] = arr[s - 1];
            arr[s - 1] = temp;
        }
        for (int i = 0; i < s; i++)
        {
            sum = sum + (arr[i] ^ i);
        }
        cout << sum << endl;
    }
    return 0;
}





//  int t, n, k;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> k;
//         int m = n - 1;
//         long long int max_shifts = pow(2, m);
//         long long int sum, temp = pow(2, n) - 1;
//         if (k > max_shifts)
//         {
//             sum = 2 * temp * max_shifts;
//         }
//         else
//             sum = 2 * temp * k;
//         cout << sum << endl;