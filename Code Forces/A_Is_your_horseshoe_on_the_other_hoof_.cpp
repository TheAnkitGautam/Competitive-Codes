#include <iostream>
#include <set>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> hs;
    hs.insert(s1);
    hs.insert(s2);
    hs.insert(s3);
    hs.insert(s4);

    cout << (4 - hs.size());

    return 0;
}