// contest: Codeforces Round 1071 (Div. 3)
// problem: (B) Blackslex and Showering

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        long long total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(a[i] - a[i+1]);
        }
 
        long long best_gain = 0;
        best_gain = max(best_gain, (long long)abs(a[0] - a[1]));
        best_gain = max(best_gain, (long long)abs(a[n-2] - a[n-1]));
        for (int i = 1; i + 1 < n; i++) {
            long long gain =
                abs(a[i-1]-a[i]) +
                abs(a[i]-a[i+1]) -
                abs(a[i-1]-a[i+1]);
            best_gain = max(best_gain, gain);
        }
        cout<<total -best_gain<<"\n";
    }
    return 0;
}