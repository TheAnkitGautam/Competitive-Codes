#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sx, sy;
    cin >> sx;
    cin >> sy;
    for (int i = 0; i < sx.size(); i++)
    {
        if (sx[i] == sy[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
}