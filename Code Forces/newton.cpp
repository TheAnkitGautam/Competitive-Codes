#include <bits/stdc++.h>
using namespace std;
vector<int> table;

void initialize()
{
    for (int i = 79; i < 100000; i++)
    {
        
    }
    
}
int MagicNumber(int N)
{
    int num = N;
    int two_dig = num % 100;

    return two_dig;
    return -1;
}
int main()
{
    int N;
    cin >> N;
    cout << MagicNumber(N);

    return 0;
}