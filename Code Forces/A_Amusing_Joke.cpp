#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> names;
    map<char, int> pile;

    string n1, n2, pl;
    cin >> n1 >> n2;
    for (int i = 0; i < n1.length(); i++)
        names[n1[i]]++;
    for (int i = 0; i < n2.length(); i++)
        names[n2[i]]++;
    cin >> pl;
    for (int i = 0; i < pl.length(); i++)
        pile[pl[i]]++;
    if (names == pile)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}