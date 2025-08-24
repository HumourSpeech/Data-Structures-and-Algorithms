// CodeForces Round 1043
// Homework:2132A
// string manipulation
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
    int n; cin>>n;
    string a; cin>>a;
    int m; cin>>m;
    string b; cin>>b;
    string c; cin>>c;
    
    for(int i = 0; i<m; i++){
      if(c[i] == 'D'){
        a = a+b[i];
      }else{
        a = b[i]+a;
      }
    }
    
    cout<<a<<"\n";
	}
	
	return 0;
}