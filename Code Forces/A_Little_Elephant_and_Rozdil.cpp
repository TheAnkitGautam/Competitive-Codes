#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int minIdx = min_element(v.begin(), v.end()) - v.begin();
    int min = *min_element(v.begin(), v.end());
    int c = count(v.begin(), v.end(), min);
    if (c == 1)
        cout << minIdx + 1;
    else
        cout << "Still Rozdil";
    return 0;
}