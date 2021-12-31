#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, v, c, t;
    cin >> n >> v;
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        bool flag = false;
        cin >> c;
        for (int j = 0; j < c; j++)
        {
            cin >> t;
            if (!flag and v > t)
            {
                ans.push_back(i);
                flag = true;
            }
        }
    }

    cout << ans.size() << endl;
    for (auto &val : ans)
        cout << val << " ";
    return 0;
}