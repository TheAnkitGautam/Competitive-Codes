#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> m,ans;
    for (int i = 1; i <= n; i++)
    {
       m[arr[i-1]]=i;
    }
    for(auto v: m)
    cout<<v.second<<" ";

    return 0;
}