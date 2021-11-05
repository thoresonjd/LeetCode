class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for (int i = 0; i < n; i++) {
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);
        }
        return res;
        // vector<int> res;
        // vector<int> left(nums.begin(), nums.end() - n);
        // vector<int> right(nums.begin() + n, nums.end());
        // for (int i = 0; i < n; i++) {
        //     res.push_back(left[i]);
        //     res.push_back(right[i]);
        // }
        // return res;
    }
};
