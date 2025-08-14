//Only One Digit CodeForces
//2126A solved..
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
     int n; cin>>n;
     
     int r;
     int smallest = INT_MAX;
     
     while(n>0){
       r = n%10;
       smallest = min(smallest, r);
       n /= 10;
     }
     cout<<smallest<<"\n";
    }
    return 0;
}