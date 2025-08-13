//Code Forces Round 1041(Div1+Div2)
//Hamiiid, Haaamid... Hamid?
//2127B

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int t; cin>>t;
    while(t--){
     int n,x; cin>>n>>x;
     string s; cin>>s;
 
     int i = x-1;
     int j = x-1;
 
     while(i>=0 && s[i]=='.') i--;
     while(j<n  && s[j]=='.') j++;
 
     int ans = 1 + max(min(x-1,n-j),min(i+1,n-x));
     cout<<ans<<endl;
    }
}