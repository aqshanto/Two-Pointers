#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        cnt += mp[b[i]];
    }
    // int i = 0, j = 0, cnt = 0;
    // int fpos = -1, lpos = -1;
    // while (i < n && j < m) {
    //     if (i < n && fpos == -1 && a[i] <= b[j]) {
    //         if (a[i] == b[j]) {
    //             fpos = i;
    //             lpos = i;
    //             cnt++;
    //         }
    //         i++;
    //     } else if (i < n && a[i] == b[i]) {
    //         lpos = i;
    //         i++;
    //     } else if (j < m && a[i] > b[j]) {
    //         cnt += (lpos - fpos + 1);
    //         lpos = -1;
    //         fpos = -1;
    //         j++;
    //     } else {
    //         i++;
    //     }
    //     cout << a[i] << " " << b[j] << " " << cnt << endl;
    // }
    cout << cnt << endl;
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