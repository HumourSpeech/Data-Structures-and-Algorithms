#include <iostream>
#include <vector>
using namespace std;

void subsequenceSum(int ind, vector<int>&ds, int s, int sum, vector<int> arr, int n){
    // Base case: if the index is equal to the size of the array
    if(ind == n){
        if(s == sum){
            for(auto it:ds){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[ind]); //include the current element in the subsequence
    s+= arr[ind];
    subsequenceSum(ind+1, ds, s, sum, arr, n);
    ds.pop_back(); // exclude the current element from the subsequence
    s -= arr[ind];
    subsequenceSum(ind+1, ds, s, sum, arr, n);
}

int main(){
    vector<int> arr = {1, 2, 1};
    int sum = 2;
    int n = arr.size();
    vector<int> ds;
    
    subsequenceSum(0, ds, 0, sum, arr, n);
    return 0;
}