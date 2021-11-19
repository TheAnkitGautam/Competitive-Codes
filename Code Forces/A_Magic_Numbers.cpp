#include <iostream>
#include <string>
using namespace std;


bool magical(string n)
{
    for (int i = 0; i < n.size(); i++)
        if (n[i] != '1' && n[i] != '4')
            return false;

    if (n[0] == '4')
        return false;

    if (n.find("444") != -1)
        return false;

    return true;
}

int main()
{
    string n;
    cin >> n;
    if (magical(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}