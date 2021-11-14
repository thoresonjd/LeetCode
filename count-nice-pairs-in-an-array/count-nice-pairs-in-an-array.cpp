class Solution {
public:
    // Solution to LeetCode problem #7
    int rev(int x) {
        if (x >= INT_MAX || x <= INT_MIN) return 0;
        
        ostringstream oss;
        oss << x;
        string num = oss.str();

        int res, sign = x > 0 ? 1 : -1, len = num.length();
        for (int i = 0; i < len/2; i++)
            swap(num[i], num[len-i-1]);

        try {
            res = stoi(num);
        } catch (out_of_range& e) {
            return 0; 
        }
        
        return sign * res;
    }
    
    int countNicePairs(vector<int>& nums) {
        int nicePairs = 0, mod = 1e9 + 7;
        map<int, int> equalDiffs; // Track equal diffs (num - rev(num))
        for (int num : nums)
            nicePairs = (nicePairs + equalDiffs[num - rev(num)]++) % mod;
        return nicePairs;
    }
    
    // O(n^2) below 
    // int countNicePairs(vector<int>& nums) {
    //     int nicePairs = 0;
    //     for (int i = 0; i < nums.size() - 1; i++)
    //         for (int j = i + 1; j < nums.size(); j++)
    //             if (nums[i] + rev(nums[j]) == nums[j] + rev(nums[i]))
    //                 nicePairs++;
    //     return nicePairs;
    // }
};