#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
// typedef long long in;
#define in int64_t
#define ii int
set<in> ans;
void sieve()
{
    vector<bool> isPrime((in)1e6 + 2, true);
    for (in i = 2; i <= (in)1e6 + 1; i++)
    {
        if (isPrime[i])
        {
            ans.insert(i * i);
            for (in j = i * i; j <= (in)1e6 + 1; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}

// void search(in ele)
// {
//     in lo = 0, hi = ans.size() - 1;
//     while ((hi - lo) > 1)
//     {
//         in mid = (lo + hi) / 2;
//         if (ans[mid] < ele)
//             lo = mid + 1;
//         else
//             hi = mid;
//     }
//     if ((ans[lo] == ele) or (ans[hi] == ele))
//     {
//         cout << "YES"
//              << "\n";
//         return;
//     }
//     else
//         cout << "NO"
//              << "\n";
// }

ii main()
{
    sieve();
    in t;
    cin >> t;
    while (t--)
    {
        in ele;
        cin >> ele;
        // search(ele);
        if (ans.find(ele) != ans.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}