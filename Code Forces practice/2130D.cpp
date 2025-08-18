//Codeforces Round 1040 Div1/Div2
// 2129B/2130D
//Stay or Mirror
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> a(n+1);
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		int ans=0;
		for(int i=1; i<=n; i++) {
			int l=0,r=0;
			for(int j=1; j<i; j++) {
				if(a[i]<a[j]) {
					l++;
				}
			}
			if(l==0) continue;
			for(int j=i+1; j<=n; j++) {
				if(a[i]<a[j]) {
					r++;
				}
			}
			ans+=min(l,r);
		}
		cout<<ans<<endl;
	}
}