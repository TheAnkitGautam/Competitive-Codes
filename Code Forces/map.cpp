#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> rankList;
    rankList["alpha"] = 1;
    rankList["beta"] = 2;

    cout << rankList.at("beta") << " --> map size = " << rankList.size() << endl;
    return 0;
}