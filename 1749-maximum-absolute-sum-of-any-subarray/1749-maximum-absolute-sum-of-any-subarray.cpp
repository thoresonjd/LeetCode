class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int prefix = 0, minimum = 0, maximum = 0;
        for (int num : nums) {
            prefix += num;
            minimum = min(prefix, minimum);
            maximum = max(prefix, maximum);
        }
        return maximum - minimum;
    }
};