// Codeforces Round #2126
// Problem D - This is The Last Time(1200)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void input(){
  int n;
  int k;
  cin>> n >>k;
  
  vector<vector<int>> cas(n, vector<int>(3));
  for(int i = 0; i<n; i++){
    cin>>cas[i][0]>>cas[i][1]>>cas[i][2];
  }

  sort(cas.begin(), cas.end());

  for(int i = 0; i<n; i++){
    int real = cas[i][2];
    if(cas[i][0]<=real && cas[i][1]>=real){
      if(cas[i][0]<=k && cas[i][1]>=k){
        k = max(k, real);
      }
    }

  }
  cout<< k <<endl;
  return;
}


int main() {
  int cases;
  cin>>cases;
  for(int i = 0; i<cases; i++){
    input();
  }
  return 0;
}
