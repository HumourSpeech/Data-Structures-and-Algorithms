//CodeForces Round 1040 Div2
// Pathless 

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
      int n, s; cin>> n >> s;
      int cnt[3] = {0, 0, 0};
      int sm = 0;
      for(int i = 0; i<n; i++){
        int x; cin>>x; sm+=x;
        cnt[x]++;
      }
      
      if(sm>s || s-sm == 1){
        while(cnt[0]--) cout<<"0 ";
        while(cnt[2]--) cout<<"2 ";
        while(cnt[1]--) cout<<"1 ";
        cout<<"\n";
      }else{
        cout<<"-1\n";
      }
    }
    return 0;
}