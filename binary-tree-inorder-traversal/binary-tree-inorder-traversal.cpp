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
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> res = inorderTraversal(root->left);    // Left child first
        vector<int> right = inorderTraversal(root->right);
        res.push_back(root->val);                          // Parent second
        res.insert(res.end(), right.begin(), right.end()); // Right child last
        return res;
    }
};