#pragma region Macros
#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()

using namespace std;
typedef long long ll;
#pragma endregion
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	ll K, X;
	cin >> K >> X;

	if (500 * K < X)
	{
		cout << "No" << '\n';
	}
	else
	{
		cout << "Yes" << '\n';
	}


	return 0;
}
