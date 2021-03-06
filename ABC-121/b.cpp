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

	int N, M, C;
	cin >> N >> M >> C;
	vector<int> correct(M);
	rep(i, M)
	{
		cin >> correct[i];
	}

	int ans = 0;

	rep(i, N)
	{
		vector<int> code(M, 0);
		int sum = 0;
		rep(j, M)
		{
			cin >> code[j];
			sum += correct[j] * code[j];
		}
		if (sum + C > 0)
			ans++;
	}
	cout << ans << '\n';
	return 0;
}
