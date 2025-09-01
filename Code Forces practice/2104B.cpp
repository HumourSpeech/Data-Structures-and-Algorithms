//Educational Codeforces Round 178 (Rated for Div. 2)
// B. Move to the End
//2104B Solved
//TAGS: brute force, data structures, dp, greedy, implementation (1000)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
      
      int n; cin>>n;
      
      vector<long long> arr(n);
      for(auto &x: arr) cin>>x;
      
      // for(auto &x: arr) cout<<x;
      
      vector<long long> greater(n, 0);
      long long maxi = 0;
      for(int i = 0; i<n; i++){
        maxi = max(maxi, arr[i]);
        greater[i] = maxi;
      }
      
      long long sum = 0;
      for(int i = n-1; i>=0; i--){
        if(i == n-1){
          cout<<greater[i]<<" ";
          sum+=arr[i];
        }else{
          cout<<greater[i]+sum<<" ";
          sum += arr[i];
        }
      }
      cout<<"\n";
    }
    return 0;
}