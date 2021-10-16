// Justin Thoreson
// Search in Rotated Sorted Array LeetCode solution


// Best attempt
// Runtime: Faster than 89.46% of C++ online submissions
// Memory: Less than 31.15% of C++ online submissions
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int index = distance(nums.begin(), find(nums.begin(), nums.end(), target));
        return index < nums.size();
    }
};
