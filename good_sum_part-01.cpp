#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
	int n, s;
	cin >> n >> s;
	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	int sum = 0, l = 0, mx = INT_MIN;
	for (int r = 0; r < n; r++) {
		sum += v[r];
		while (sum > s) {
			sum -= v[l];
			l++;
		}
		mx = max(mx, sum);
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