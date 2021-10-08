#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int sumOdd = 0, sumEven = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (int(s[i]) % 2 == 0)
                sumEven += int(s[i]);
            else
                sumOdd += int(s[i]);
        }
        int diff = abs(sumOdd - sumEven);
        if (diff % 3 == 0 || diff % 5 == 0 || diff % 7 == 0)
            cout << "Prime String" << endl;
        else
            cout << "Casual String" << endl;
    }

    return 0;
}