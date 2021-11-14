class Solution {
public:
    int maxPower(string s) {
        int maxPow = 1, count = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) count++;
            else count = 1;
            maxPow = max(maxPow, count);
        }
        return maxPow;
    }
};