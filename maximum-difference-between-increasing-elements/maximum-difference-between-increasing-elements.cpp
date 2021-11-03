class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = -1, min = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < min)
                min = nums[i];
            if (nums[i] > nums[i-1] && nums[i] - min > maxDiff)
                maxDiff = nums[i] - min;
        }
        return maxDiff;
    }
};