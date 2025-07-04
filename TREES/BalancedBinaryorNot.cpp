#include <iostream>
#include <cmath>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        int lh = height(root->left);
        if(lh==-1) return -1;
        int rh = height(root->right);
        if(rh==-1) return -1;

        if(abs(lh-rh)>1) return -1;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    cout << "Is the binary tree balanced? " << (solution.isBalanced(root) ? "Yes" : "No") << endl;

    // Clean up memory (not shown here)
    return 0;
}