// Justin Thoreson
// First missing positive LeetCode solution

// First attempt (best)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int i = 0;
        while (nums[i] < 1 && i < n - 1) 
            i++;
        
        if (nums[i] > 1 || nums[i] < 1) 
            return 1;
        else
            while (i < n - 1 && (nums[i] + 1 == nums[i+1] || nums[i] == nums[i+1])) 
                i++;
        
        if (i >= n - 1 || nums[i] + 1 != nums[i+1]) 
            return nums[i] + 1;
                
        return nums[i];
    }
};
