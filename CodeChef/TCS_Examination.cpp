#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int da, db, dc, sa, sb, sc;
        cin >> da >> db >> dc >> sa >> sb >> sc;

        if (da + db + dc > sa + sb + sc)
            cout << "DRAGON" << endl;
        else if (da + db + dc < sa + sb + sc)
            cout << "SLOTH" << endl;
        else if (da != sa)
            da > sa ? cout << "DRAGON" << endl : cout << "SLOTH" << endl;
        else if (db != sb)
            db > sb ? cout << "DRAGON" << endl : cout << "SLOTH" << endl;
        else
            cout << "TIE" << endl;
    }

    return 0;
}