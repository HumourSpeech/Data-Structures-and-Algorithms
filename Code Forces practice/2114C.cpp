// contest: Codeforces Round 1027 (Div. 3).
// problem: (C) Need More Arrays, Accepted.


#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(auto& x: arr){
      cin>>x;
    }
    int lastpicked = arr[0];
    int ans = 1;
    
    for(int i = 1; i < n; i++){
      if(arr[i] > lastpicked+1){
        ans++;
        lastpicked = arr[i];
      }
    }
    cout<<ans<<"\n";
    
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