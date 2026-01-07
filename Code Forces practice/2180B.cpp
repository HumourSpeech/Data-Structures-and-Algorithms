// contest: Codeforces Global Round 31 (Div. 1 + Div. 2)
// problem: (B) Ashmal
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(){
  int n;cin>>n;
  
  vector<string> arr(n);
  for(auto&x:arr){
    cin>>x;
  }
  string s=arr[0];
  
  for(int i = 1; i<n; i++){
    string str= arr[i];
    s = min(s+str, str+s);
  }
  cout<<s;
}
 
int main(){
    ios::sync_with_stdio(false);
    int TC;
    cin >> TC;
    while(TC --){
        solve();
        cout<<'\n';
    }
    return 0;
}