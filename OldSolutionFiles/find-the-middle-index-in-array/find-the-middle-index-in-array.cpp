class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0, total = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size(); i++) {
            if (sum * 2 == total - nums[i])
                return i;
            sum += nums[i];    
        }
        return -1;
    }
};
