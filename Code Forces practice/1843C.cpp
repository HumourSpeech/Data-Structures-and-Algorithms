//Codeforces Round (Div. 3) Editorial
//Sum in Binary Tree
//Solution 1843C
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
      long long n; cin>>n;
      
      long long sum = 0;
      while(n){
        sum +=n;
        n = n/2;
      }
      cout<<sum<<"\n";
    }
    return 0;
}