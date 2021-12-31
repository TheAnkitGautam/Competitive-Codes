#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        sort(arr, arr + n);
        
        int P = arr[n / 2];
        int Q = arr[(n / 2) - 1];
        cout << abs(P - Q) << endl;
    }
    return 0;
}