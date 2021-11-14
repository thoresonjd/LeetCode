class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length(), count = 0, k = 3;

        if (n < 3) 
            return 0;
        
        for (int i = 0; i < n - k + 1; i++)
            if (s[i] != s[i+1] && s[i+1] != s[i+2] && s[i+2] != s[i])
                count++;
        
        return count;
    }
};
