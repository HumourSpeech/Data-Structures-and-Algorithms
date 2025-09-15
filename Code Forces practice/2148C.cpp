// Pacer
// Code forces Round #1050 Div4
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << " "; cout << endl;
 
 
void solve() {
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];
 
    ll prev_time = 0;
    int prev_side = 0; // start at side 0
    ll ans = 0;
    bool ok = true;
 
    for (int i = 0; i < n; ++i) {
        ll len = a[i] - prev_time;
        int dist = abs(b[i] - prev_side);
        if (len < dist) { ok = false; break; }
        ll left = len - dist;
        // Points = dist + (left - (left%2))
        ans += dist + (left - (left % 2));
        prev_time = a[i];
        prev_side = b[i];
    }
 
    if (!ok) {
        cout << -1 << '\n';
        return;
    }
    ll rem = m - prev_time;
    if (rem > 0) ans += rem;
    cout << ans << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}