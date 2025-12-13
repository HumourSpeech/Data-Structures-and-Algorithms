// contest: Codeforces Global Round 29 (Div. 1 + Div. 2).
// problem: (A) Shortest Increasing Path, Accepted.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void input(){
    int x, y; cin >> x >> y;
    if(y == 1){
      cout << -1;
      return;
    }
    if(x==y){
      cout << -1;
      return;
    }
    if(y>x){
      cout<<2;
      return;
    }
    if(x>y){
      int x1 = 1;
      int y1 = y;
      if((x-x1)>y1){
        cout<<3;
        return;
      }else{
        cout<<-1;
        return;        
      }
    }
    
}
 
 
int main() {
    int t; cin >> t;
    while(t--){
      input();
      cout<<endl;
    }
    return 0;
}