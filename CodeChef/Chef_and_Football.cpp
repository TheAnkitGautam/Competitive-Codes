#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, n;
    cin >> t;
    map<int, int> score;
    map<int, int> goal;

    int t1, t2, g1, g2;

    for (int i = 0; i < (t * (t - 1)) / 2; i++)
    {
        cin >> t1 >> t2 >> g1 >> g2;
        if (g1 > g2)
            score[t1] += 4;
        else if (g2 > g1)
            score[t2] += 4;
        else if (g1 == g2)
            score[t1]++, score[t2]++;
        goal[t1] += g1;
        goal[t2] += g2;
    }
    int maxScore = 0, maxGoal = 0, team = 0;
    vector<int> tno;
    for (auto val : score)
        if (val.second > maxScore)
            team = val.first, maxScore = val.second;
    for (auto sc : score)
        if (sc.second == maxScore)
            tno.push_back(sc.first);
    if (tno.size() > 1)
    {
        for (auto gval : goal)
            if (gval.second > maxGoal)
                team = gval.first, maxGoal = gval.second;
    }
    cout << team;
    return 0;
}