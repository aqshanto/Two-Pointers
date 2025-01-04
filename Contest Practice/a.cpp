#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int l = 0, r = 0, sum = 0, mx = INT_MIN;
	int ans = INT_MIN;
	while (l < n && r < n) {
		if (sum <= m) {
			sum += v[r];
			r++;
		} else {
			sum -= v[l];
			l++;
		}
		mx = max(sum, mx);
	}
	cout << mx << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin>>t;
	while (t--) {
		solve();
	}
	return 0;
}