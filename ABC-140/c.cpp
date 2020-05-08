#include <bits/stdc++.h>
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define sz(v) (int)(v).size()
using namespace std;
using P = pair<int, int>;
typedef long long ll;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> vec(n-1);
	rep(i, n-1) cin >> vec[i];
	vector<int> ans(n, pow(10, 5));
	rep(i, n-1)
	{
		ans[i] = min(vec[i], ans[i]);
		ans[i+1] = min(ans[i+1], vec[i]);
	}
	int sum = 0;
	rep(i, n) sum += ans[i];
	cout << sum << endl;

	return 0;
}
