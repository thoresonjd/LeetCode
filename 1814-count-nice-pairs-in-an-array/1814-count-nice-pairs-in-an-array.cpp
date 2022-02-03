class Solution {
private:
    int rev(int x) {
        if (x <= INT_MAX && x >= INT_MIN) {
            string num = to_string(abs(x));
            int sign = x > 0 ? 1 : -1;
            reverse(num.begin(), num.end());
            try {
                return sign * stoi(num);
            } catch (out_of_range& e) {
                cout << "Out of range";
            }
        }
        return 0;
    }
    
public:
    int countNicePairs(vector<int>& nums) {
        int totalNicePairs = 0, mod = 1e9 + 7;
        unordered_map<int, int> equalDiffCounts;
        for (int num : nums)
            totalNicePairs = (totalNicePairs + equalDiffCounts[num - rev(num)]++) % mod;
        return totalNicePairs;
    }
};

/**
 * Note: The following two equations are equivalent
 * nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
 * nums[i] - rev(nums[i]) == nums[j] - rev(nums[j])
 */