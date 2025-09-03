// Educational Codeforces Round 178 (Rated for Div. 2)
// Three Decks
// 2104A
#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
      
      int a, b, c;
      cin>>a>>b>>c;
      
      int rem = c-b;
      c = b;
      
      a +=rem;
      if(a == b){
        cout<<"YES\n";
        continue;
      }
      
      if(a>b){
        rem = a-b;
        if(rem%3 == 0){
          cout<<"YES\n";
        }else{
          cout<<"NO\n";
        }
      }else{
        cout<<"NO\n";
      }
    }
    return 0;
}