class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        int l = 0, r = nums.size()-1;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum < target) l++;
            else if (sum > target) r--;
            else {
                res.push_back(l + 1);
                res.push_back(r + 1);
                return res;
            }
        }
        
        return {-1, -1};
    }
};