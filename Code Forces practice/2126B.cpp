// No Casino in the mountains(all test case passed || Solved in single loop)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        int size, hike;
        cin>>size>>hike;
        vector<int> arr(size, 0);
        for(int i = 0; i<size; i++){
          cin>>arr[i];
        }
        
        
        bool prevDayHike = false;
        int totalHike = 0;
        int countHike = 0;
        
        for(int i = 0; i<size; i++){
          if(prevDayHike == true || arr[i] == 1){
            countHike = 0;
            prevDayHike = false;
            continue;
          }
          
          if(countHike < hike && arr[i] == 0){
            countHike++;
          }
          if(countHike == hike && arr[i] == 0){
            totalHike++;
            countHike = 0;
            prevDayHike = true;
          }
        }
        cout<<totalHike<<endl;
    }
}