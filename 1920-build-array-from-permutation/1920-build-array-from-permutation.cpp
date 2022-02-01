class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++)
            ans[i] = nums[nums[i]];
        return ans;
        
        // vector<int> ans;
        // for (int num : nums)
        //     ans.push_back(nums[num]);
        // return ans;
    }
};