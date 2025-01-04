// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl "\n"
// double pi = 3.141592653589793238462643383279;

// void solve() {
//     int n, t;
//     cin >> n >> t;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     int l = 0, r = 0, sum = 0, mx = INT_MIN;
//     while (l < n && r < n) {
//         if (sum + v[r] <= t) {
//             sum += v[r];
//             r++;
//         } else {
//             sum -= v[l];
//             l++;
//         }
//         mx = max(mx, (r - l));
//         // cout << l << " " << r - 1 << " " << sum << " " << mx << endl << endl;
//     }
//     mx = max(mx, (r - l));
//     mx < 0 ? cout << 0 << endl : cout << mx << endl;
// }

// signed main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t = 1;
//     // cin>>t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {

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