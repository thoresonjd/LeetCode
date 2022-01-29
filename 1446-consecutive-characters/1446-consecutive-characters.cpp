class Solution {
public:
    int maxPower(string s) {
        // if (!s.length()) return 0;
        int power = 1, maxPower = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i-1] == s[i]) power++;
            else power = 1;
            maxPower = max(maxPower, power);
        }
        return maxPower;
    }
};