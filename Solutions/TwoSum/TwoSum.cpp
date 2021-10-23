// Justin Thoreson
// Two Sum Leetcode Solution

// Best cpp attempt
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target-nums[i]) != hash.end())
                return {hash[target-nums[i]], i};
            else
                hash[nums[i]] = i;
                
        }
        return {-1, -1};
    }
};
