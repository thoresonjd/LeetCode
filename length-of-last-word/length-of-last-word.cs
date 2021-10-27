public class Solution {
    public int LengthOfLastWord(string s) {
        int letters = 0, i = s.Length; 
        while (s[--i] == ' ') {}                    // Traverse past whitespace
        while (i >= 0 && s[i--] != ' ') letters++;  // Count letters in last word
        return letters;
    }
}
