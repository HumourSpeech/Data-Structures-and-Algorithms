// Binary String Battle
// Codeforces problem : 2123D
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  
  int tc; cin>>tc;
  while(tc--){
    int n, k; cin>> n >> k;
    string s; cin>> s;
    
    int on = 0;
    for(auto &x : s){
      if(x=='1') on++;
    }
    
    if(on <= k || n < k*2) cout<<"Alice\n";
    else cout<<"Bob\n";
  }
  return 0;
}