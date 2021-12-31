#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v1, v2;
pair<int, int> mini()
{
    int ans = INT_MAX, id = 0;
    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] < ans and v2[i] != 0)
        {
            ans = v2[i];
            id = i;
        }
    }
    return make_pair(ans, id);
}

pair<int, int> maxi()
{
    int ans = INT_MIN, id = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] > ans)
        {
            ans = v1[i];
            id = i;
        }
    }
    return make_pair(ans, id);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    
    int maxP = 0, minP = 0;
    for (int i = 0; i < n; i++)
    {
        int x = maxi().first;
        maxP += x;
        int ind = maxi().second;
        v1[ind]--;

        int y = mini().first;
        minP += y;
        int idd = mini().second;
        v2[idd]--;
    }
    cout << maxP << " " << minP;
    return 0;
}