#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s;
    char arr[200];
    int k = 0;
    for (int i = 0; i < s.length(); i += 2)
    {
        arr[k] = s[i];
        k++;
    }
    sort(arr, arr + k);
    for (int i = 0; i < k - 1; i++)
        cout << arr[i] << "+";
    cout << arr[k - 1];
    return 0;
}