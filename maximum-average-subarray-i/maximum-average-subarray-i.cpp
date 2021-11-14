class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = accumulate(nums.begin(), nums.begin()+k, 0);
        double maxAvg = sum/k;
        for (int i = 1; i < nums.size() - k + 1; i++) {
            sum = sum - nums[i-1] + nums[i+k-1];
            maxAvg = max(maxAvg, sum/k);
        }
        return maxAvg;
    }
};