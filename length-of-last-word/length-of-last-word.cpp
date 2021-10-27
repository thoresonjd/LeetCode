class Solution {
public:
    int lengthOfLastWord(string s) {
        int letters = 0, i = s.length(); 
        while (s[--i] == ' ') {}                    // Traverse past whitespace
        while (i >= 0 && s[i--] != ' ') letters++;  // Count letters in last word
        return letters;
    }
};