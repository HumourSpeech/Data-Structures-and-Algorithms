// Sublime Sequence
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << " "; cout << endl;
 
void solve() {
  int x,n; cin>>x>>n;
  int rem = n%2;
  
  if(rem == 1){
    cout<<x;
    return;
  }else{
    cout<<0;
    return;
  }
  
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