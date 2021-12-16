class Solution {
public:
    int rev(int x) {
        if (x >= INT_MAX || x <= INT_MIN) 
            return 0;
        
        string num = to_string(abs(x));
        int sign = x > 0 ? 1 : -1;
        
        for (int i = 0 ; i < num.length()/2; i++)
            swap(num[i], num[num.length()-i-1]);
        
        try {
            return sign * stoi(num);
        } catch (out_of_range& e) {
            printf("Out of range");
        }
        
        return 0;
    }
    
    int countNicePairs(vector<int>& nums) {
        int nicePairs = 0, mod = 1e9 + 7;
        unordered_map<int, int> equalDiffCount; // Track equal diffs (num - rev(num))
        for (int num : nums)
            nicePairs = (nicePairs + equalDiffCount[num - rev(num)]++) % mod;
        return nicePairs;
    }
};