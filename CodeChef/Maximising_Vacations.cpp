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
		int n, x;
		cin >> n >> x;

		string s;
		cin >> s;

		int c = 0, c1 = 0;

		int one = count(s.begin(), s.end(), '1');

		for (int i = 0; i <= n; i++)
		{
			if (c >= x)
			{
				++c1;
				c = 0;
			}
			if (s[i] == '0' and i < n)
				++c;
		}
		if ((n - one) % x == (x - 1))
			cout << c1 + 1 << endl;
		else
			cout << c1 << endl;
	}

	return 0;
}