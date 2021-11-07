class Solution {
public:
    int findMin(vector<int>& nums) {
        int i;
        for (i = 0; i < nums.size() - 1 && nums[i] < nums[i+1]; i++) {}
        reverse(nums.begin(), nums.end() - (nums.size() - i - 1));
        reverse(nums.begin() + i + 1, nums.end());
        reverse(nums.begin(), nums.end());
        return nums[0];
    }
};