#include <iostream>
#include <vector>
using namespace std;

// Problem: Given a binary array nums and an integer k, return the length of the longest subarray that contains at most k zeros.
// Approach: Use a sliding window technique to maintain a window that contains at most k zeros.
// TC : O(2n), where n is the length of the input array.
// SC : O(1), since we are using a constant amount of space for variables.
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        int l=0;
        int r = 0;
        int zeros = 0;

        while(r<nums.size()){
            // Expand the right end of the window
            // If the current number is zero, increment the count of zeros. 
            if(nums[r] == 0) zeros++; 
            // If the number of zeros exceeds k, shrink the window from the left
            // until we have at most k zeros in the window.
            while(zeros>k){
                if(nums[l] == 0) zeros--;
                l++;
            }
            // Calculate the length of the current window and update maxlen if it's larger.
            // The window is valid if it contains at most k zeros.
            // The length of the window is (r - l + 1).
            if(zeros<=k){
                int len = (r-l)+1;
                maxlen = max(len, maxlen);
            }
            r++;
        }
        return maxlen;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,1,0,0,1,1,1,0,1};
    int k = 2;
    int result = sol.longestOnes(nums, k);
    cout << "The length of the longest subarray with at most " << k << " zeros is: " << result << endl;
    return 0;
}