class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int index = distance(nums.begin(), find(nums.begin(), nums.end(), target));
        return index < nums.size();
    }
};