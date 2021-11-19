#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    int ans1 = (a + b) * c;
    // int ans2 = a + (b * c);
    int ans3 = a * b * c;
    int ans4 = a + b + c;
    int ans5 = a * (b + c);
    cout << max(max(ans1, ans5), max(ans3, ans4));
    return 0;
}