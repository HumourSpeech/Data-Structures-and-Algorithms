// Lasers
// Solved in O(1) time complexity
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << " "; cout << endl;
 
void solve() {
  int n, m, x, y;
  cin>>n>>m>>x>>y;
  
  vector<int> a(n);
  for(auto &q: a) cin>>q;
  
  vector<int> b(m);
  for(auto &w: b) cin>>w;
  
  cout<<n+m;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
}