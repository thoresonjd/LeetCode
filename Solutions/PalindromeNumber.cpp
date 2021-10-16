// Justin Thoreson
// Palindrome Number LeetCode solution

// Best attempt
// Runtime: faster than 81.35% of C++ online submissions
// Memory: less than 91.10% of C++ online submissions
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        ostringstream oss;
        oss << x;
        string num = oss.str();
        
        for (int i = 0; i < num.size()/2; i++)
            if (num[i] != num[num.size()-i-1])
                return false;
        
        return true;
    }
};
