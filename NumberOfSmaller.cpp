#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i = 0, j = 0;
    vector<int> c(m);
    int cnt = 0;
    while (j < m) {
        if (i < n && a[i] < b[j]) {
            i++;
        } else {
            c[j] = i;
            j++;
        }
        cnt++;
    }
    for (int i = 0; i < m; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
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