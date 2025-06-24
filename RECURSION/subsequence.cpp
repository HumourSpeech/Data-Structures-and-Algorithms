#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the all the subsequences of a given string

void printF(int ind, vector<int>&ds, vector<int> arr, int n){
    // Base case: if the index is equal to the size of the array
    if(ind == n){
        for(auto it: ds){
            cout << it << " ";
        }
        if(ds.empty()){
            cout<<"{}";
        }
        cout << endl;
        return;
    }
    // include the current element in the subsequence
    ds.push_back(arr[ind]);
    printF(ind+1, ds, arr, n);

    ds.pop_back(); 

    // exclude the current element from the subsequence
    printF(ind+1, ds, arr, n);
}
int main(){

    vector<int> arr= {5, 7, 3};
    int n = arr.size();
    cout<<n;
    vector<int> ds;

    printF(0, ds, arr, n);
}


