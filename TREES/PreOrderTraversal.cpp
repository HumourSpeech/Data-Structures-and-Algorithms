#include <iostream>
#include <vector>
using namespace std;

//   Definition for a binary tree node.
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
    void traverse(TreeNode* root, vector<int>&Nodes){
        if(root == nullptr){
            return;
        }
        Nodes.push_back(root->val);
        traverse(root->left, Nodes);
        traverse(root->right, Nodes);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> Nodes;
        traverse(root, Nodes);
        return Nodes;
    }
};

int main(){
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution solution;
    vector<int> result = solution.preorderTraversal(root);

    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up memory
    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}