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
private:
    TreeNode* convert(vector<int>& nums, int l, int r) {
        if (nums.size() == 0 || l > r) return nullptr;
        if (nums.size() == 1) return new TreeNode(nums[0]);
        
        int mid = l + (r-l)/2;
        TreeNode* head = new TreeNode(nums[mid]);
        head->left = convert(nums, l, mid - 1);
        head->right = convert(nums, mid + 1, r);
        return head;
    }
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums, 0, nums.size()-1);
    }
};
