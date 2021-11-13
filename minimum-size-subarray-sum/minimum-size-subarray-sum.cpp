class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0;
        int count = 0, minLen = INT_MAX;
        
        while (l <= r && r < nums.size()) {
            int sum = accumulate(nums.begin() + l, nums.begin() + r + 1, 0);
            if (sum < target) r++;
            else if (sum >= target) {
                count = r-l+1;
                l++; 
                minLen = min(minLen, count);
            }
        }
        
        return minLen == INT_MAX ? 0 : minLen;
    }
};