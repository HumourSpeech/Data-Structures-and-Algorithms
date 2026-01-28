// contest: Codeforces Round 1074 (Div. 4).
// problem: (C) Shifted MEX, Accepted.
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto&x : a) cin >> x;
 
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int best = 1, cur = 1;
    for (int i = 1; i<(int)a.size(); i++) {
        if (a[i] == a[i - 1] + 1) {
            cur++;
        }else{
            cur=1;
        }
        best=max(best, cur);
    }
    cout<<best<<"\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}