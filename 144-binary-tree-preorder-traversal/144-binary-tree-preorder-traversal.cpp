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
    vector<int> preorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> res = {root->val};                      // Parent first
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);
        res.insert(res.end(), left.begin(), left.end());    // Left child second
        res.insert(res.end(), right.begin(), right.end());  // Right child last
        return res;
    }
};
