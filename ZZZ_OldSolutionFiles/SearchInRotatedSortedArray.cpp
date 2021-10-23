// Justin Thoreson
// Search in Rotated Sorted Array LeetCode solution


// Best attempt
// Runtime: Faster than 72.73% of C++ online submissions
// Memory: Less than 29.64% of C++ online submissions
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = distance(nums.begin(), find(nums.begin(), nums.end(), target));
        return index >= nums.size() ? -1 : index;
    }
};
