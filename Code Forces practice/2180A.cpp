// contest: Codeforces Global Round 31 (Div. 1 + Div. 2)
// problem: (A) Carnival Wheel
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(){
    int l , a, b; cin >> l >> a >>b;
    
    vector<bool> visited(l, false);
    int cur = a;
    int ans = a;
 
    while (!visited[cur]) {
        visited[cur] = true;
        ans = max(ans, cur);
        cur = (cur + b) % l;
    }
 
    cout << ans << "\n";
    
}
 
int main(){
    ios::sync_with_stdio(false);
    int TC;
    cin >> TC;
    while(TC --){
        solve();
    }
    return 0;
}