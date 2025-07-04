#include <vector>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool LtoR = true;
        while(!q.empty()){
            int size = q.size();
            vector<int> level(size);
            for(int i = 0; i<size;i++){
                TreeNode* node = q.front();
                q.pop();

                int index = LtoR? i : (size-1-i);

                level[index] = node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            LtoR = !LtoR;
            ans.push_back(level);
        }
        return ans;
    }
};

int main(){
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    vector<vector<int>> result = solution.zigzagLevelOrder(root);

    for(const auto& level : result) {
        for(int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Clean up memory (not shown here)
    return 0;
}