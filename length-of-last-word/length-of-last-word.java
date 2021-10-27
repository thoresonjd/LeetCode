class Solution {
    public int lengthOfLastWord(String s) {
        int letters = 0, i = s.length(); 
        while (s.charAt(--i) == ' ') {}                    // Traverse past whitespace
        while (i >= 0 && s.charAt(i--) != ' ') letters++;  // Count letters in last word
        return letters;
    }
}
