class Solution {
private:
    int cummulativeSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;
        return sum;
    }
    
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        return cummulativeSum(n) - total;
    }
};