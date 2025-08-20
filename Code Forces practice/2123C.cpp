//Codeforces Round 1034 Div3
//Problem c: Prefix min and Suffix max
//Solved in O(n+m)
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
    }
    
    vector<int> r(n);
    r[0] = 1;
    r[n-1] = 1;
    int mini = arr[0];
    for(int i = 1; i<n-1; i++){
      if(arr[i]<mini){
        r[i] = 1;
        mini = arr[i];
      }else{
        r[i] = 0;
      }
    }
    
    int maxi = arr[n-1];
    for(int i = n-2; i>=0; i--){
      if(r[i] == 0){
        if(arr[i]>maxi){
          r[i] = 1;
          maxi = arr[i];
        }
      }
    }
    
    for(int i : r){
      cout<<i;
    }
    cout<<"\n";
	}
}