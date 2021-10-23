// Justin Thoreson
// Two Sum Leetcode Solution

// Original Solution:
// Time: 8 ms (95.35%)
// Space: 10.3 MB (62.43%) - LeetHub
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v = nums, res;
        sort(v.begin(), v.end());
        
        int l = 0, r = v.size()-1;
        while (l < r) {
            int sum = v[l] + v[r];
            if (sum < target) l++;
            else if (sum > target) r--;
            else {
                int index = distance(nums.begin(), find(nums.begin(), nums.end(), v[l]));
                res.push_back(index);
                nums[index] = INT_MIN;
                index = distance(nums.begin(), find(nums.begin(), nums.end(), v[r]));
                res.push_back(index);
                return res;
            }
        }
        
        return {-1, -1};
    }
};

// Latest C++ attempt
// Runtime: Faster than 95.35% of C++ online submissions for Two Sum.
// Memory: Less than 24.97% of C++ online submissions for Two Sum.
// Attended a hacking lab on hash maps, solution was learned via group discussion.

// If a number in the vector does not exist in the map, 
// add it as a key with the index as its value.
// Otherwise, if there exists a key k such that the current number + k = target,
// return the index of k and the index of the current number
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
