#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v = {4, 7, 44, 47, 77, 444, 447, 477, 777, 744, 747};
    for (int i = 0; i < v.size(); i++)
    {
        if (n % v[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}