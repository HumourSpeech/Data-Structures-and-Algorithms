//Codeforces round 1042 Div 3
//question name: Lever
//2131A
#include <iostream>
#include <vector>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  
  int tc; cin>>tc;
  while(tc--){
    
    int n; cin>> n;
    vector<int> a1(n);
    for(int i = 0; i<n; i++){
      cin>>a1[i];
    }
    
    vector<int> a2(n);
    for(int i = 0; i<n; i++){
      cin>>a2[i];
    }
  
    long long lever = 0;
    for (int i = 0; i < n; ++i){
      lever += max(0, a1[i] - a2[i]);
    }
    cout << (lever + 1) <<endl;
  }
  return 0;
}