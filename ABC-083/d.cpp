#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
using namespace std;
typedef long long ll;
#pragma endregion



// WA && RE
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	string S;
	cin >> S;
	int len = S.length();

	int i = 0;
	int ans;
	if (len % 2 == 0)
	{
		ans = len / 2;
		while (S.at((len / 2) - 1 - i) == S.at((len / 2) + i) && i < (len / 2) + 1)
		{
			ans++;
			i++;
		}
	}
	else
	{
		ans = len / 2;
		while (S.at(len / 2 - i) == S.at(len / 2 + i) && i < (len / 2))
		{
			ans++;
			i++;
		}
	}

	cout << ans << '\n';

	return 0;
}
