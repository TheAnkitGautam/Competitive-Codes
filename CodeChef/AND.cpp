#include <bits/stdc++.h>
using namespace std;

int find_and(int arr[], int len)
{

    int ans = arr[0];
    for (int i = 0; i < len; i++)
        ans = (ans & arr[i]);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << find_and(arr, n) << endl;
    
    return 0;
}
