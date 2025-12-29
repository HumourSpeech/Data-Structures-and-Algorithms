// contest: Squarepoint Challenge (Codeforces Round 1055, Div. 1 + Div. 2).
// problem: (A) Increase or Smash, Accepted.

#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    set<int> s;
    for (int i = 0; i<n; i++){
      int x;
      cin >> x;
      s.insert(x);
    }
    cout<<s.size()*2-1;
}
 
int main(){
    ios::sync_with_stdio(false);
    int TC;
    cin >> TC;
    while(TC --){
        solve();
        cout<<endl;
    }
    return 0;
}