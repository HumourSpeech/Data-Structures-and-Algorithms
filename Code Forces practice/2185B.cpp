// contest: Codeforces Round 1074 (Div. 4).
// problem: (B) Prefix Max, Accepted.
#include <bits/stdc++.h>
using namespace std;
 
long long valueOfArray(const vector<int>& a) {
    long long sum = 0;
    int mx = 0;
    for (int x : a) {
        mx = max(mx, x);
        sum += mx;
    }
    return sum;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    long long best = valueOfArray(a); // no swap case
 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            vector<int> b = a;
            swap(b[i], b[j]);
            best = max(best, valueOfArray(b));
        }
    }
 
    cout << best << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
