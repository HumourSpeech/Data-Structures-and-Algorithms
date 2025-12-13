// contest: Codeforces Round 1054 (Div. 3).
// problem: (C) MEX rose, Accepted.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n, k; cin>>n>>k;
    
    int count = 0;
    vector<int> arr(n);
    for(auto &x: arr){
      cin>>x;
      if(x == k)count++;
    }
    cout<<count;
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