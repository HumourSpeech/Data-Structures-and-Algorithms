#include <iostream>
#include <vector>
using namespace std;

// QUESTION:
// Given n non-negative integers representing an elevation map where the width of each bar is 1, 
// compute how much water it can trap after raining.
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
// In this case, 6 units of rain water (blue section) are being trapped.

class Solution {
public:
    int trap(vector<int>& arr) {
        int lmax = 0;
        int rmax = 0;
        int total = 0;
        int l = 0;
        int r = arr.size()-1;

        while(l<r){
            if(arr[l]<=arr[r]){
                if(lmax>arr[l]){
                    total+=lmax-arr[l];
                }else{
                    lmax = arr[l];
                }
                l++;
            }else{
                if(rmax>arr[r]){
                    total += rmax - arr[r];
                }else{
                    rmax = arr[r];
                }
                r--;
            }
        }
        return total;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    int result = sol.trap(arr);
    cout << "The total amount of water that can be trapped is: " << result << endl;
    return 0;
}