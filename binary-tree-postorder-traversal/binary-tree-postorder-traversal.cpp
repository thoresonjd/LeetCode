/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> res = postorderTraversal(root->left);    // Left child first
        vector<int> right = postorderTraversal(root->right); // Right child second
        res.insert(res.end(), right.begin(), right.end());
        res.push_back(root->val);                            // Parent last
        return res;
    }
};