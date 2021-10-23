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