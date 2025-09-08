// Collatz Conjecture
// solved 2137A
#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << " "; cout << endl;
 
void solve() {
    int k, x;
    cin >> k >> x;
    
    while (k--) {
        if (x % 2 == 0) {
            x *= 2;
        } else {
            if ((x - 1) % 3 == 0) {
                int prev = (x - 1) / 3;
                if (prev % 2 == 1) {
                    x = prev;
                    continue;
                }
            }
            x *= 2;
        }
    }
 
    cout << x;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
}