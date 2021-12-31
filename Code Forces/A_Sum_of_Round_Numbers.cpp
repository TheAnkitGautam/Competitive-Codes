#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        vector<int> v;
        cin >> n;
        int mux = 1;
        while (n)
        {
            int dig = n % 10;
            if (dig != 0)
                v.push_back(dig * mux);
            n /= 10;
            mux *= 10;
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;

        v.clear();
    }

    return 0;
}