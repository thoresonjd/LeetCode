class Solution {
public:
    int maxDepth(string s) {
        int max = INT_MIN, count = 0;
        for (char c : s) {
            if (c == '(') count++;
            else if (c == ')') count--;
            max = max > count ? max : count;
        }
        return max;
    }
};