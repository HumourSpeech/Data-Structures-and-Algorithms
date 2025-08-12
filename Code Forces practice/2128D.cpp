// Longest Decreasing Subsequence
// 2128D Solution
#include <iostream>
#include <vector>

using namespace std;

using ll = long long;
int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  
  int tc; cin>>tc;
  while(tc--){
    
    int n; cin>> n;
    vector<int> p(n);
    for(auto &x : p) cin>>x;
    
    ll ans = 1;
    vector<ll> dp(n, 0); dp[0] = 1;
    for(int i = 1; i<n; i++){
      if(p[i]>p[i-1]){
        dp[i] = dp[i-1]+1;
      }else{
        dp[i] = dp[i-1]+i+1;
      }
      ans+=dp[i];
    }
    cout<<ans<<"\n";
  }
  return 0;
}