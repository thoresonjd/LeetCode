class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = distance(nums.begin(), find(nums.begin(), nums.end(), target));
        return index >= nums.size() ? -1 : index;
    }
};