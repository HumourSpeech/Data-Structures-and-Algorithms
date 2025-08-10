// Recycling center
// 2128A greedy approach

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  
  int tc; cin>>tc;
  while(tc--){
    
    int n, c; cin>> n >> c;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }
    
    sort(arr.begin(), arr.end());
    int coins=0;

    while(n--){
      if(arr[n]>c){
        coins++;
        arr[n] = arr[n]*2;
      }else{
        arr[n] = 0;
        for(int j = 0; j<n; j++){
          arr[j] = arr[j]*2;
        }
      }
    }
    cout<<coins<<endl;
  }
  return 0;
}