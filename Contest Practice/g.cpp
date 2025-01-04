#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
	int n;
	cin >> n;
	vector<int>c(n), w(n);
	for (int i = 0; i < n; i++)cin >> c[i];
	for (int i = 0; i < n; i++)cin >> w[i];
	int l = 0, sum = 0, mx = INT_MIN;
	int cnt[1000100] = {0};
	int num = 0;
	for (int r = 0; r < n; r++) {
		cnt[c[r]]++;
		if (cnt[c[r]] == 1) {
			num++;
			sum += w[r];
		} else {
			mx = max(mx, sum);
			cnt[c[r]]--;
			num--;
			sum -= w[r];
		}
	}
	cout << mx << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}