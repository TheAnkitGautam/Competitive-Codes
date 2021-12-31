#include <iostream>
using namespace std;

int main()
{
    int t, sx, sy, ex, ey, time = -1;
    string s;
    cin >> t >> sx >> sy >> ex >> ey >> s;
    for (int i = 0; i < t; ++i)
    {
        if (s[i] == 'E' and sx < ex)
            sx += 1;
        else if (s[i] == 'S' and sy > ey)
            sy -= 1;
        else if (s[i] == 'W' and sx > ex)
            sx -= 1;
        else if (s[i] == 'N' and sy < ey)
            sy += 1;
        if (sx == ex && sy == ey)
        {
            time = i + 1;
            break;
        }
    }
    cout << time << endl;
    return 0;
}
