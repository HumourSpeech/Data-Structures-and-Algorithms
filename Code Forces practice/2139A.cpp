//  contest: Codeforces Round 1048 (Div. 2).
// problem: (A) Maple and Multiplication, Accepted.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int a,b;
    cin >> a >> b;
    
    if(a == b){
      cout<<0;
      return;
    }else if(a%b == 0 || b%a == 0){
      cout<<1;
      return;
    }else{
      cout<<2;
      return;
    }
    
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